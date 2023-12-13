# 8장. Application Dev

Status: 데이터베이스

### 1. SQL 사용 방법

1. static approaches: embedded SQL(SQLJ)
    - 프로그램 코드에 명세하며, 컴파일시 결정됨
2. Dynamic approaches: uses SQL API(ODBC, JDBC 등)
    - 강력하지만 느리다는 단점이 있다.
    - 런타임시 바뀔 수 있음.
3. Embedded SQL
    - 내장SQL은 호스트언어 중간중간 SQL문장을 직접 삽입하는 형식으로, 전처리과정을 꼭 거쳐야 함.
        - 전처리기 : 내장SQL문장을 해당 언어 구문에 맞춰 함수 호출 형식으로 변환. 구문검사, 권한검사 등 진행
4. Cursors
    - impedance mismatch 해결방법 : cursors(커서)
        - impendance mismatch(임피던스 미스매치): 기존 관계형 데이터베이스의 SQL과 프로그래밍 언어 사이에 데이터 구조, 기능 등의 차이로 발생하는 충돌현상
    - 커서 실행 (open, fetch, close)
        - `EXEC SQL open myCursor;` 커서선언
        - `EXEC SQL fetch myCursor into :si, :sn;` 커서통해 결과 받음
        - `EXEC SQL close myCursor;` 커서 종료

### 2. Application Architecture

1. 역사 : Mainframe era(6-70s), client/server(8-90s), web(mid 90s)
2. client/server application deployment
    
    ![Untitled](8%E1%84%8C%E1%85%A1%E1%86%BC%20Application%20Dev%20d8b8ede6cb404669afb55271e3a4dd30/Untitled.png)
    
    - Two-tier아키텍쳐
        - client : user, application
        - server : DBsystem
        - connect: network
        - 단점: 코드 수정시 모든 app을 바꿔야해서 비용이 커짐(이를 보완하기위해 Three-tier 생김)
        - 
    - Three-tier아키텍쳐
        - client : user, application-client
        - server : application-server, DBsystem
        - connect: network
3. web architecture
    - 3계층: web-server — application-server — DBS로 구성
        - 단점: web-server—application-server간 과부하 걸릴 수 있음.
    - 2계층: web-server and application-server — DBsystem으로 구성
4. 그 외 : 쿠키는 텍스트다….