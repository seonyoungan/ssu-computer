#include "types.h"
#include "user.h"
#include "stat.h"

#define PNUM 5 // process 개수
#define PRINT_CYCLE 100000000 // process가 정보를 출력하는 주기
#define TOTAL_COUNTER 500000000 // process가 종료될 때 counter값
void sdebug_func(void);

int main(void)
{
  sdebug_func();
}

void sdebug_func(void)
{
  int n=0;
  int pid;
  printf(1, " start sdebug command\n");

  while(n<PNUM)//프로세스 갯수만큼 반복  
  {  
    pid = fork(); //새 프로세스 생성
    if(pid < 0)
      break;
    if(pid == 0) //자식 프로세스인 경우
    { 
        int count = 0;
        int add = 1; //1씩 증가 시키며 부여할 값
        long long first = uptime(); //프로세스 시작 시간 
        long weight = weightset(n+add);
        
        if(weight == 0)
        {
          printf(1,"ERROR! PID: %d, WEIGHT: %d\n", getpid(), weight);
        }

	for(count=0; count < TOTAL_COUNTER; count++)
	{
	  if(count == PRINT_CYCLE) //카운터 == 프로세스 정보출력 주기이면 프로세스 정보 출력
	  {
            long long last = uptime(); //출력 시간	
            printf(1,"PID: %d, WEIGHT: %d, TIMES: %d\n", getpid(), weight, (last-first)*10);	  
	  }
	}
        if(count == TOTAL_COUNTER) //count == TOTAL_COUNTER이면 종료
        { 
          printf(1,"PID: %d, terminated\n", getpid()); //현재의 프로세스 아이디(자식)를 가져오는 시스템콜 
          exit();
        }
    }
    n++;
  }
  for(int i=0;i<PNUM;i++)
  {
    if(pid != 0)
      wait(); //wait()시스템콜을 통해 자식프로세스 종료 기다리기
  }
  printf(1, "end of sdebug command\n");
  exit();
}

