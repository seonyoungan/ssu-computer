# final 정리

Status: 데이터베이스 제발..

### 6장

### 8장

### 10장

### 11장

### 1. Good schema vs bad schema

1.  bad schema는 3가지의  anomaly를 발생시킬 수 있다. 
    1. (insert, delete, update anomaly)
2. 디자인의 목표
    1. 각 테이블이 모두 good 해야하고, 만일 good하지 않으면 무손실조인분해할 것
    2. functional dependencies(함수종속성) 이론 기반으로 분해
3. 함수종속성 : 릴레이션이 만족시켜야 하는 제약
    1. 어떤 테이블이 주어졌을 때 테이블의 값은 다른 테이블의 값을 유니크하게 결정함
    2. 즉, key가 functional dependencies의 일반적인 예시이다.
        - 키를 통해 모든 정보를 가져올 수 있으며, join시 키를 이용해 정보를 가져온다.
        - key : 슈퍼키(튜플을 식별하는 기능) / 후보키: 슈퍼키이면서 최소화인 키
            - 후보키는 모든 속성을 함수적으로 결정한다.

### 2. Functional Dependency Theory

1. F+와 Fc
    1. F+ : closure(폐포)라고하며, 가장 큰 집합(슈퍼셋)
        - 예시 : F= {f1, f2, … fn}일 때, 이 집합에서 찾을 수 있는 모든 Functional Dependency의 집합이란?
            - F+ = {f1, f2 , … fm}  (* 단 m>n일 수 있다.)
        - **F+는 attribute set을 통해 쉽게 찾을 수 있다.**
    2. Fc : canonical cover이며, 중복된 FD를 뺀 최소의 집합
    
2. 무의미함수종속성 : 함수종속성이 테이블의 모든 인스턴스에 만족되는 경우.
    1. id와  name이 같거나, name에 id가 포함되면 모든 a→b가 당연하다.
        
        
        | id | name |
        | --- | --- |
        | 1 | lee |
        | 1 | lee |
        | 2 | park |
        | 3 | kim |
3. **암스트롱의 공리**
    1. 재귀규칙(reflexivity): X ⊇Y 이면, X →Y
    2. 부가규칙(augmentation): X →Y 이면, X Z →Y Z
    3. 이행규칙(transitivity): X →Y 이고 Y →Z 이면, X →Z
    4. 결합규칙(union) : X → Y 이고 X → Z 이면, X → Y Z
    5. 분해규칙(decomposition) : X → Y Z 이면, X → Y 이고 X → Z
    6. 가이행 규칙(pseudotransitivity) : X → Y 이고 Y Z → Ω 이면, X Z → Ω
4. procedure for computing f+ :
    1. 속성폐포의 함수종속성의 왼쪽속성이, 현재까지 구한 속성 폐포에 포함되어있으면, 오른쪽 속성을 왼쪽 속성폐포에 포함됐다고 한다.
5. attribute set
    1. a+의 알고리즘
        
        ```markdown
        1. 초기값 : a->a
        2. b->r이 F에 있으면 반복
        		만일, b ⊆ closure이면 // a ->b 가 존재하면
        		closure = closure union r  // r을 클로저에 추가한다.
        ```
        
    2. attribute set의 활용
        - 함수종속성 유효성 검증 (a+를 통하면, F+를 쉽게 구할 수 있다. )
        - 슈퍼키 검증
        - 함수종속성의 폐포 구하기 (단, 이방법은 어려움)
6. Canonical Cover : 중복없이 가장 작은 집합 찾기
    
    ```markdown
    예시1)
    F = {A->B, B->C, A->CD} 일때,
      1) A->B, B->C 이므로, A->C 유도할 수 있음.
      2) A->CD이면, A->C and A->D 라는 것을 알 수 있음
         - 그런데 1)을 통해(A->B, B->C) A->C를 유도할 수 있으니, A->C는 지우고, A->D만 남김
      3) 따라서, Fc = {A+B, B->C, A->D}
    
    예시2)
    F = {A->B, B->C, AC->D} 일때,
      1) A->B, B->C 이므로, A->C 유도할 수 있음.
      2) AC->D이면, A->AC, AC->D이므로, A->D  유도할 수 있음.
      3) 따라서, Fc = {A->B, B->C, A->D}
    
    그리구 F+ = Fc+여야함. Fc+를 풀어쓰면 F+(슈퍼셋)이 나오는 것이기 때문.
    
    예시3)
    R = (A,B,C)
    F = {A->BC, B->C, A->B, AB->C} 이면,
    
      1) A->BC와 A->B는 중복되므로 결합하고, A->B는 지운다.  F = {A->BC, B->C, AB->C}
      2) AB->C를 하기위해, (AB)+를 해본다. (AB)+ = ABC이므로 없애도된다. F = {A->BC, B->C}
      3) A->BC를 다시 보면, A->B, A->C이다
        - (A->B, B->C로 A->C는유추될 것이기 때문에, A->C는 없애도된다. F = {A->B, B->C}
      4) 따라서, Fc = {A->B, B->C}
    ```
    

### 3. Nomal Forms

1. 정규형의 장단점 및 특징
    1. 장점: anomaly 제거 가능 / 새 데이터형 확장시 일부만 변경 가능 / DB에 최소한 영향 미침
    2. 단점: join이 많아질 수 있음 / 느려질 수 있음
    3. 만일, 정규형을 만족하지 못하면 분해해야함(무손실조인분해로)

1. 제 2정규형 하기 전에 알아야할 것
    1. prime 속성 vs non-prime속성 : 후보키 집합에 속하면 prime속성, 속하지 않으면 non-prime속성
    2. fully vs partial : a→b까지만 있다면 fully종속, 만일 a→b and r→b가 있다면 partial종속
    3. 이행적종속 : a→b, b→r인 경우를 말함.
    
2. **각 정규형의 조건**
    1. **제1정규형 : atomic한 하나의 테이블로 만든다.**
        - 세부조건 : 각 컬럼에이 1개의 속성만 가진다 / 하나의 컬럼이 같은 종류의 타입을 가진다 / 각 컬럼이 unique한 이름을 가진다 / 칼럼 순서에 상관 없어야 한다.
        - non-atomic이란 무엇인가? ⇒ set, list, bag …etc…
    2. **제2정규형: 제1정규형을 만족하며 + 모든 컬럼이 완전함수종속(fully)해야 한다.**
    3. **제3정규형: 제2정규형을 만족하며 + 이행적함수종속이 없어야 한다.**
    4. **BCNF : 제3정규형을 만족하며, 모든 결정자가 후보키집합이어야한다.**

### 4. Decomposition and Design

1. 정규화의 목표 : DB설계시 정규형의 조건을 주고 만족시키면 된다
    1. 이때 good하지 않게 설계 되었다면 good하도록 바꾸는 방법이 있다. how? 분해해서.
    2. 그런데 데이터가 손실되면 안되겠죠? **무손실조인분해**를 해야한다.
        - **무손실조인분해인지 알기 위해서는, R1∩R2→R1 이거나, R1∩R2→R2 이면 된다.**
        
        ```markdown
        예시)
        R=(A,B,C)라는 릴레이션이 있고 F={A->B, B->C} 일때,
        어떤사람은 R1=(A->B) R2=(B->C)라는 테이블을 만들 수도 있고 (case1),
        어떤사람은 R1=(A->B) R2=(A->C)라는 테이블을 만들 수도 있다 (case2).
        
        이 두경우 모두 다시 조인을 했을때 손실은 없다.
          - case1의 경우, R1에서 B는 슈퍼키가 아니고, R2에서 B는 슈퍼키이다. R1∩R2->R2를 만족한다.
          - case2의 경우, R1∩R2->R1을 만족한다.
        
        그러나 Dependence Preservation하느냐?를 묻는다면..
         - case1의 경우, 조인을 하지 않아도 F={A->B, B->C}임을 알 수 있다.
         - case2의 경우, 조인을 해야 F={A->B, B->C}임을 알 수 있을 것이다. ifA->B and B->C then A->C이니까.
        
        따라서, 가급적이면 설계시 DP가 발생하지 않게하는 게 좋다.
        ```
        
2. Dependency Preservation(함수의 종속성 보존)
    1. R={R1, R2, … Rn}일 때, F+={F1, F2, …Fn)이면 Dependency Preservation 하다는 것이다.
    2. 함수의 종속성보존의 장점 : 각 테이블을 업데이트할 때 join을 하지 않아도 된다. 
3. 제3정규형과 BCNF
    
    
    |  | 제3정규형 | BCNF |
    | --- | --- | --- |
    | 장점 | Dependency Preservation 보장 | 중복이 발생하지 않는다. |
    | 단점 | 중복이 발생할 수 있다.  | 항상 Dependency Preservation 보장하지 않음(될 수도 있고, 안될 수도 있음) |
    
4. 역정규화 : 역으로 테이블을 하나로 만듦
    1. 하는 이유 : 어떤 학생이 어떤 과목을 수행할 경우, couse join takes가 필요한다. 그럴바에는 합친 테이블을 쓰자라는 생각임
    2. 장점 : 빠른검색 / 실행속도 등 
    3. 단점: 중복, 공간이 많이 발생, 업데이트가 필요
    4. 대안: 기존의 테이블은 유지하고, view 테이블을 만들어 사용하면 된다