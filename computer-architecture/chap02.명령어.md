#### 1. 하드웨어 연산
    = MIPS의 산술명령어
      add a,b,c # a = b + c
      sub a,b,c # a = b - c
    - 예시
      f = (g+h) - (i+j)
      #add t0, g, h
      #add t1, i, j
      #sub s0, t0, t1
   
#### 2. 피연산자
    - 레지스터: 프로세서 데이터패스에 있는 소규모의 데이터 저장 장소
      - MIPS의 레지스터
      - 32개 (각 1 word)
      - 예시
        - 변수 레지스터 $s0, $s1, $s2, ... $7
        - 임시 레지스터 $t0, $t1, ... $t9
#### 
    - 메모리: 레지스터 개수보다 훨씬 많은 데이터 원소 (레지스터가 아니라 메모리에 저장한다. )
      - 주소(인덱스 역할)와 데이터로 구성된 1차원 배열
      - MIPS의 데이터 전송 명령어
        적재: lw (load word) : 메모리->레지스터로 데이터 가져옴
        저장: sw (store word) : 레지스터 내용을 메모리에 넣음
      = 메모리 피연선자를 사용하는 치환문
        - g = h + A[8] #A의 시작주소 : $s3
          int g, h, A[100] #
          lw $t0, $s3 #메모리에서 레지스터로 $3(8)을 가져오고 t0에 넣음
          add $s1, $s2, $t0  #s1에 $s2와 t0을 더한 값을 넣음
#### 3. 하드웨어, 소프트웨어의 인터페이스
        - 엔디안
        - MIPS는 빅엔디안을 사용
         제일 왼쪽(최상위 바이트 주소를 워드 주소로 사용함)
      
#### 4. 상수 또는 수치 피연산자
        - 상수 피연산자 쓸 일이 많긴 함
        - 방법
          lw연산 후 add연산
          addi사용
          addi %s3, %s3, 4 #$s3 = $s3 + 4
        - 만일 상수가 없다면? addi를 쓰면 안된다!
        
#### 5. 부호가 있는 수와 없는 수
        - 1의 보수
          carry 있는 경우
            13 - 10 = 3을 이진수로 바꾸면 1101 - 1010 = 0011
            이때 -1010을 1의 보수로 바꾸어 계산하면.. +0101
            1101 + 0101 = 1 0010임 -> 맨 앞은 carry
            ⭐ 1의보수는 이 carry를 최하위비트에 더해주면됨 -> 0011
          carry 없는 경우
            10 - 13 = -3을 이진수로 바꾸면 1010 - 1101 = -0011
            이때 -1101을 1의 보수로 바꾸어 계산하면 +0010
            1010 + 0010 = 1100 -< carry가 발생하지 않았으므로
            ⭐다시 1의 보수를 해주면 0011 !
#### 
        - 2의 보수
          carry 있는 경우
            13 - 10 = 3은 1101 - 0010 = 0011이다.
            -10의 2의 보수를 해준다. 1의보수 + 1이 2의 보수이다. 0101+1 = 0110
            1101 + 0110 = 1 0011임 -> 맨 앞은 carry
            ⭐ 2의 보수는 이 carry를 그냥 버려주면 됨 -> 0011 
          carry 없는 경우
            ⭐다시 2의 보수를 해줌(0010 + 1 = 0011)

#### 6. 컴퓨터의 내부 표현
        - OP    : 명령어가 실행할 연산의 종류
        - RS, RT: 첫 번째와 두 번째 근원지(소스) 피연산자 레지스터
        - RD    : 목적지 레지스터
        - shamt : 자리이동의 양
        - funct : op필드에서 연산의 종류 표시했는데,
                  funct 필드에는 그중의 한 연산을 구체적으로 지정함

##### 6-1. R타입 명령어
|op   |rs   |rt   |rd   |shamt|funct|
|-----|-----|-----|-----|-----|-----|
|6bits|5bits|5bits|5bits|5bits|6bits|

##### 6-2. I타입 명령어
|op   |rs   |rt   |constant 또는 address|
|-----|-----|-----|---------------------|
|6bits|5bits|5bits|16bits               |

##### 6-3. (참고)field size
모든 MIPS의 명령어는 32비트로 LONG TYPE이다.
|6bits|5bits|5bits|5bits|5bits|6bits|
|-----|-----|-----|-----|-----|-----|

##### 6-4. 정리
|명령어|형식|op   |rs   |rt   |rd   |constant 또는 address|
|-----|-----|-----|-----|-----|-----|---------------------|
|add  |R    |0    |reg  |reg  |reg  |                     |
|sub  |R    |0    |reg  |reg  |reg  |                     |
|addi |I    |32   |reg  |reg  |     |constant             |
|lw   |I    |35   |reg  |reg  |     |address              |
|sw   |I    |48   |reg  |reg  |     |address              |

####
        - 명령어는 숫자로 표현된다.
        - 프로그램은 메모리에 기억되어있고 숫자처럼 읽고 쓸 수 있다.
        
#### 7. 논리 연산 명령어
|명령어의 종류|MIPS연산자|C연산자 |
|-------------|---------|--------|
|Shift left   |<<       |sll     |
|shift right  |>>       |srl     |
|and          |&        |and,andi|
|or           ||        |or, ori |
|not          |~        |nor     |

#### 8. 자리이동 연산의 종류
        - logical   : shift한만큼 0으로 채워라 = R타입
        - arithmetic: shift left: 앞에 x31있으면 날리고 0 추가하는데 right가 문제 있음
            - 앞에 부호가 있음(음수이냐 양수이냐.) 음수면 1, 양수면 0으로 둠.
        - rotate    : 각각 right, left, shift함
        
#### 9. MIPS shift 명령어
        - sll (=shift left logical)일 때 funct = 000 000
        - srl (=shift right logical)일 때 funct = 000 010
        - sra (=shift right arithmetic)일 때 funct = 000 011
        - rotr(=rotate word right)일 떄 funct = 000 010 (srl)
        - rotrv                   일 때 shamt = 00001 funct = 000 110

#### 10. MIPS Logical Instructions
        - and, or, xor, nor
        - andi, ori, xori, lui
     
#### 11. Conditional branches

####
        - beq $r1, $r2, L # r == r2이면 L로 jump
        - bne $r1, $r2, L # r =/= r2면 L로 jump
        - I 형식 사용
        - PC와 거리를 의미함
        - 주소는 4의 배수여야함(거리 : imm * 4)
        - branch의 타겟은 현재pc + 1 + imm의 주소
        
#### 12. Other jump instruction
        - jr $s0 #go to s0
        - j타입으로 op(6bits) | low address(26bits)
          주소는 32비트인데 low address를 26비트 사용
          word alignment : low address 뒤에 2bits 00을 붙여줌
          4비트가 부족함: currentPC의 최상위 비트 사용
        - 256MB 바운더리 내에서만 점프 가능
####
        - jal procedureaddress # $ra <= pc+4
                               # pc <- procedureAddress
                               
          
