# 6장. RDB functionalities

Status: 데이터베이스

### 1. authorization

1. 권한 종류
    - 인스턴스 권한  : read / insert / update / delete
    - 스키마 권한 : 인덱스 생성 및 삭제(index) / 테이블생성(resources) / 테이블특성변경(alteration) / 테이블 삭제(drop)
    - privileges in sql (언어 권한)
        - select / insert / update / delete : 의미가 명
        - reference : 외래키 선언권한
        - usage : 도메인 사용 권한
2. GRANT절(권한부여)
    - `with grant option` : 권한 받은 사용자가 부여받은 권한 다른 사용자에게 부여 가능
    
    ```sql
    grant select on professor to U1, U2, U3; //U1, U2, U3에게 교수테이블 검색 권한을 줌 (다른사람에게 권한을 부여할 수 없음)
    grant select on professor to U4 with grant option; //U4는 교수테이블 검색 권한 부여받고, 다른사람에게 부여할 수 있는 권한도 가진다.
    grant references(depfName) on department to Lee; // Lee사는 본인 소유의 테이블에서 department.deptName을 참조할 수 있다.
    //references 권한이 필요한 이유 : 참조무결성에 제약형성시, 속성값 변경에 제한을 줄 수 있기 때문.
    ```
    

1. REVORK(권한철회)
    - 만일, U1, U2가동일권한을 U3에게 부여한 경우, U1이 권한을 취소해도 (U2에게 부여받은 권한은 살아있으므로) U3의 권한이 유지된다.
    - 옵션
        - `restrict` : U1, U2, U3이 아무것도 싸질러놓지 않은 경우만 이들의 권한을 철회하라(만일, U1, U3이 U4에게 권한을 줬으면, 철회가 안됨. U2만 권한철회) ⇒ 사용자가 인지 못한 권한에 대해 취소방지하는 기능
        - `cascade` : U1, U2, U3은 물론이고 이들이 싸질러놓은 권한까지도 모두 철회함
    
    ```sql
    revoke select on professor from U1,U2,U3 restrict; 
    revoke select on professor from U1, U2, U3 cascade;
    ```
    
2. View권한
    - 일반 테이블과 마찬가지로 권한 부여 대상에서 뷰에 대한 삽입/삭제/검색/갱신등이 존재
    - 베이스테이블 조합으로 생성되지만,기본적으로 베이스 테이블권한과 뷰 권한은 상관이 없다.
        - 예: 기본적으로 최소 읽기 권한이 있어야 뷰생성이 가능할 것이며, 새성된 뷰권한은 베이스테이블을 능가할 수 없다. (뷰는 의존적임)
    - 에제
        
        ```sql
        //예제1. 과목에만 접근, 교수월급에는 접근하지 않도록 뷰를 생성
        create view myTeach as
        	select name, title
        	from professor, teaches, course
        	where teaches.pID = professor.pID and course.pID = teaches.pID
        		and semester='Fall' and year=2015
        
        //예제2. 요점: 조교가 교수테이블 읽기 권한 없이, 뷰 테이블만 가지고 접근이 가능하다.
        ```
        

1. Role : 다수에게 권한 부여시 동일한 롤로 정의하여 부여 가능하다.
    
    ```sql
    create role manager;
    create role teller; //테러에게도 권한 생성
    	grant select on branch to teller; 
    	grant update(balance) on account to teller; //외래키권한 주기 가능
    	grant all privileges on accout to manager; //유저에게 DB접근권한 부여(?)
    ```
    

### 2. 재귀질의(Recursive)

1. 예제 
    - **with recursive** 테이블명(칼럼1,칼러2) **as** (selet절, from절) **union** (select문, from절, where절) ⇒ WRAU
    
    ```sql
    with recursive **recPrereq(cID, pID)** as (select courseID, prereqID from prereq)
    union
    	(select recPrereq.cID, prereqpID
    		from **recPrereq**, prereq //임시절에서 만든 테이블을 재귀함
    		where recPrereq.pID = prereq.cID)
    
    select *
    from recPrereq;
    ```