##assignment02
1.	"서울" 에 사는 모든 고객들의 이름을 출력하시오.
```sql
select customer_id
from customer
where customer_city = “서울”;

```
2.	고객이 사는 도시와 같은 은행에서 대출한 고객들의 이름을 출력하시오.
```sql
select distinct(customer_name)
from customer a natural join borrower b natural join loan_branch c natural join branch d
where a.customer_city = d.branch_city;
```
3.	가장 근무년수가 작은 직원들의 이름과 근무년수를 출력하시오.
```sql
select employee_name, employee_length
from employee
where employee_length = (select min(employee_length) from employee);
```
4.	최소 1명 이상의 고객을 맡고 있는 직원들의 이름과 고객의 수를 출력하시오.
```sql
select e.employee_id, e.employee_name
from employee e left join customer_banker b on e.employee_id = b.employee_id
where b.customer_id != ''
group by e.employee_id
having count(b.customer_id)>=1;
```
5.	성이 “김”인 고객들의 대출 금액을 합산해서 출력하시오.
```sql
select sum(c.amount) as sum
from customer a natural join borrower b natural join loan c
where a.customer_name like '김%';
```
6.	모든 은행의 자산 평균보다 더 많은 자산을 가진 은행의 이름을 출력하시오.
```sql
select branch_name
from branch
where assets > (select avg(assets) from branch);
```
7.	은행에 예금계좌를 가지고 있지만 대출계좌는 가지고 있지 않은 모든 고객들의 아이디와 이름을 출력하시오.
```sql
select a.customer_id, a.customer_name
from customer a left outer join depositor b on (a.customer_id = b.customer_id)
where b.customer_id is null;
```
8.	“서울”에 살고, 최소한 3개의 예금계좌를 가진 고객들의 아이디와 평균 예금을 출력하시오.
```sql
select customer_id, truncate(avg(balance),0)
from customer natural join depositor natural join account
group by customer_id, customer_city
having count(customer_id) >= 3 and customer_city ="서울";
```
9.	“부산”에 위치하는 지점 중, 최소한 하나 이상의 지점보다 더 많은 자산을 가진 모든 지점의 이름을 출력하시오.
```sql
select branch_name
from branch
where assets >
    (select min(assets)
    from branch
    where branch_city='부산');
```
10.	“서울”에 위치하는 모든 지점에 대출 계좌를 가진 모든 고객들의 아이디와 이름을 출력하시오.a
```sql
with temp(customer_id,branch_name) as (select customer_id,branch_name from loan_branch natural join borrower natural join branch)
    select distinct a.customer_id, a.customer_name
    from customer a
    where not exists
        (select distinct branch_name
        from branch
        where branch_name not in
            (select temp.branch_name
            from temp
            where temp.customer_id = a.customer_id) and branch_city = "서울");
```
11.	"홍길동"에게 직접, 간접적으로 관리되고 있는 직원들의 이름을 출력하시오. (재귀적 질의를 추천)
```sql

```

12.	예금계좌의 잔고가 1,000만원 이상인 예금계좌는 그 잔고가 5% 증가되도록 하고, 그렇지 않은 예금계좌는 3% 증가되도록 변경하시오.
```sql
update account set balance= case
    when balance >= 10 and balance*1.05 then truncate(balance*1.05, 0)
    when balance < 10 and balance*1.03 then truncate(balance*1.03, 0)
end;
```

```sql
select *
from account;
```

13.	모든 예금계좌의 잔고의 합이 1억원 이상인 고객의 등급을 “VIP”로 변경하시오.
```sql
update customer set customer_type="VIP"
where customer_id in (
    select customer_id
    from depositor natural join account
    group by customer_id
    having 100 <= sum(balance));
```

```sql
select *
from customer;
```


14.	담당 고객이 한 명도 없는 직원들의 모든 정보를 삭제하시오.
```sql
with temp(employee_id) as (select employee_id from customer_banker natural join employee)
delete from employee
where employee_id not in (select employee_id
    from temp);
```

```sql
select *
from employee;
```

15.	상환이 완료된 모든 대출의 모든 정보를 삭제하시오.
```sql
delete from loan
where customer_id 


select l.loan_number, l.amount - coalesce(sum(p.payment_amount, 0) as totalPaymentAmount)
from loan l left join payment p on l.loan_number = p.loan_number
group by l.loan_number, l.amount;


select loan_numbber, sum(payment_amount)
from payment
where
```
16.	지점과 예금 또는 대출 고객들로 구성된 “all_customer” 뷰를 정의하시오. 이때 뷰 스키마 all_customer=(branch_name, customer_name) 이다.

```sql
create view all_customer as
select a.branch_name, c.customer_name
from loan_branch a natural join borrower b natural join customer c;
```


17.	16번에서 정의한 뷰를 이용하여 “숭실” 지점의 모든 고객의 이름을 출력하시오.
```sql
select customer_name
from all_customer
where branch_name = "숭실지점";
```

18.	은행에 예금은 있지만 대출은 없는 모든 고객의 이름과 살고 있는 도시를 포함하는 뷰 “only_account_customer”를 정의하시오. 이때 뷰 스키마 only_account_customer=(customer_name, customer_city) 이다.
```sql
create view only_account_customer as
select c.customer_name, c.customer_city
from customer c
where customer_id in (select customer_id from depositor) and
customer_id not in (select customer_id from borrower);
```
19.	18번에서 정의한 뷰를 이용하여 “서울” 도시에 살고 있는 고객들 중 예금만 갖고 있는 고객의 이름을 출력하시오.
```sql
select customer_name 
from only_account_customer
where customer_city = "서울";
```
20.	고객의 이름과 그 고객의 평균 예금 잔고를 갖는 뷰 “customer_avg_balance”를 정의하시오. 이때 뷰 스키마 customer_avg_balance=(customer_name, avg_balance) 이다.
```sql
create view customer_avg_balance as
    (select c.customer_id, c.customer_name, avg(a.balance) as avg_balance
      from customer c inner join depositor d
      on c.customer_id = d.customer_id
      inner join account a
      on d.account_number = a.account_number
      where c.customer_id in (select d.customer_id 
         from depositor d where d.customer_id is not null)
      group by c.customer_id
   );
```
21.	20번에서 정의한 뷰를 이용하여 “홍길동” 고객의 평균 예금 잔고를 출력하시오.
```sql
select customer_id, avg_balance
from customer_avg_balance
where customer_name = "홍길동";
```
