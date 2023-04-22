## SQL 질의의 기본 구조
- 실습 결과 확인: https://db-book.com/university-lab-dir/sqljs.html
### 단일 릴레이션
- 중복 튜플 허용된다. 제거를 원하면 select절 뒤 `distinct` 삽입
- 산술연산자를 사용해 질의 가능(*, /, + -)
- where절에서 비교연산자 사용 가능
- 문제: 각 교수의 급여를 10%인상한 결과를 보여라
```sql
select ID, name, dept_name, salary*1.1
from instructor
```

- 문제: 컴퓨터과학과에서 급여가 $70,000넘는 교수의 이름을 구하라
```sql
select name
from instructor
where dept_name='Comp. Sci.' and salary > 70000;
```

### 복수 릴레이션
- 기본적으로 from절에서 카디널곱이 수행된다.
```sql
select *
from instructor, department
```

- 문제: 모든 교수의 이름과 함께 그들의 학과 이름과 건물 이름을 구하라
```sql
select name, instructor.dept_name, building
from instructor, department
where instructor.dept_name = department.dept_name; /*두개의 릴레이션에 대응되도록 작성해야함*/
```

- 문제: 대학교 내에서 일부 과목을 가르친 적이 있는 모든 교수에 대해 그들의 이름과 그들이 가르쳤던 과목의 과목 아이디를 찾아내라
```sql
select name, course_id
from instructor, teaches
where instructor.ID = teaches.ID;
```

- 문제: 대학교 내에서 일부 과목을 가르친 적이 있는 컴퓨터학과 교수에 대해 그들의 이름과 그들이 가르쳤던 과목의 과목 아이디를 찾아내라
```sql
select name, course_id
from instructor, teaches
where instructor.ID = teaches.ID and instructor.dept_name='Comp. Sci.';
```

- as절을 사용해 이름 재명명 가능하다 (=상관변수, 테이블 별칭, 튜플 변수, 상관이름)
- 문제: 적어도 생물학과 한 교수보다 급여가 많은 모든 교수의 이름을 구하라
  풀이: instructor 릴레이션을 T, S로 재명명(복사본)한 후 S.dept_name이 생물학과인 교수만 나타내고 연봉을 비교하도록   
```sql
select name
from instruct as T, instructor as S
where T.salary > S.salary and S.dept_name = 'Biology';
```
### 부가적인 기능연산
- 문자열 연산
- `It's Right.` => `It**''**s Right.`
- 퍼센트 : % 문자는 어떤 부분 문자열과도 일치함
- 밑줄: _ 문자는 어떠한 문자와도 일치함
- 문제: 건물 이름에 'Watson'이라는 부분 문자열을 포함하는 모든 학과 이름을 구하라.
```sql
select dept_name
from department
where building like '%Watson%';
```

- 역슬래시 이스케이프
    - `ab\%cd%` = `ab%cd`로 시작하는 모든 문자열과 일치
    - `ab\\cd%` = `ab\cd`로 시작하는 모든 문자열과 일치

- 튜플의 출력순서
- 문제: instructor 릴레이션 전체를 salary에 대해 내림차순하고 교수의 이름에 대한 오름차순해라
```sql
select instruct.*
from instructor
order by salary desc, name asc;
```

- where절의 술어: `between`, `not between`
- 문제: 급여가 $90,000 과 $100,000사이에 있는 교수들의 이름을 찾아라
```sql
select name
from instructor
where salary between 90000 and 100000;
```

### 집합연산
- 합집합: `union`
- 문제: 2017년 가을과 2018년 봄에 가르쳤던 모든 과목의 집합
```sql
select course_id
from teaches
where semester='Fall' and year=2017)
union
(select course_id
from teaches
where semester='Spring' and year=2018;
```

- 교집합: `intersect` (중복을 보유하고 싶으면 `intesect all`)
- 문제: 2017년과 2018년 봄에 모두 가르친 모든 과목의 집합을 구하라
```sql
select course_id
from teaches
where semester='Fall' and year=2017
intersect
select course_id
from teaches
where semester='Spring' and year=2018;
```

- 차집합: excpet (중복을 보유하고 싶으면 `execpt all`)
```sql
select course_id
from teaches
where semester='Fall' and year=2017
except
select course_id
from teaches
where semester='Spring' and year=2018;
```

### 널값
- 특별한 처리가 필요: `null<1 not(null<1)` => 둘 다 이상함
- 즉 `isnull` `isnotnull`의 결과는 `unknown`
- select distinct절 사용시 중복 반드싲 ㅔ거 필요. 수렁의 null과 다르게 처리한다.

### 집계함수
- 그룹절: `groupby`
- having절: 그룹에 대한 조건 적용(단일 튜플에는 사용 안함)
- null값, boolean값: 집계 무시하고, count 결과는 0임


### 중첩하위 질의
- where절에서
- 집합 멤버십 부재 테스트: in, not in
- 집합 비교
    - 하나 이상보다 큰 `>some` 
    - 모든 것보다 큰 `>all`
- 빈 릴레이션이에 대한 태스트(상관하위질의): `exists` (비어있으면 true, 안 비어있으면 false를 반환), `not exists`

- from절에서 
- having절을 사용하지 않고 from절에서 하위 질의를 통해서 작성을 해도 된다.

### 데이터베이스 변경
- 삭제: `delete` (전체 튜플만 삭제할 수 있고 특정 속성값은 삭제 불가)
```sql
delete from r
where p
```

- 삽입: `insert into - value -` 
- 문제: 컴퓨터학과 DB과목의 제목은 CS-437dlrh 4학점인 과목을 삽입하라
```sql
insert into course
  value ('cs-437', 'DB', 'Comp.Sci.', '4')
```

- 갱신: `update - set -` (전체 튜플만 삭제할 수 있고 특정 속성값은 삭제 불가)
- 문제: 연봉이 70000이하인 교수의 급여인상을 해라
```sql
update instructor
set salary = salary * 1.05
where salary < 70000;
```

- 교수는 5% 급여인상을 하고 100000이하인 교수는 3%인상해라를 아래와 같이 풀면 순서가 바뀌면 연봉 100,000이상인 교수는 8%인상 받음 => 별로 안좋아 => case절 활용
```sql
update instructor
set salary = salary * 1.03
where salary >= 100000;

update instructor
set salary = salary * 1.05
where salary < 100000;
```

- 같은 문제 case절 활용하기
```sql
update instructor
set salary = case
  when salary <= 100000 then salary * 1.05
  else salary * 1.03
  end;
```
- 참고로 case는 select절에서도 사용될 수 있다.
```sql
select case
  when sum(credits) is nont null then sum(credits)
  else 0
  end
```
