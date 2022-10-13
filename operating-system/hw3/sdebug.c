#include "types.h"
#include "user.h"
#include "stat.h"

#define PNUM 5 // process 개수
//#define PRINT_CYCLE 100000000 // process가 정보를 출력하는 주기(pdf에 기재된 값) -test용
#define PRINT_CYCLE 10000000 // process가 정보를 출력하는 주기(구글클래스룸 댓글 상 교수님께서 언급하신 값)
#define TOTAL_COUNTER 500000000 // process가 종료될 때 counter값

void sdebug_func(void);

int main(void)
{
  sdebug_func();
  exit();
}

void sdebug_func(void)
{
  int n, pid;
  printf(1, "start sdebug command\n");

  for(n=0;n<PNUM;n++)//프로세스 갯수만큼 반복  
  {  
    pid = fork(); //새 프로세스 생성
    if(pid < 0)
      break;
    if(pid == 0) //자식 프로세스인 경우
    { 
        int counter = 0;
        int add = 1; //1씩 증가 시키며 부여할 값
        int first_ticks = uptime(); //프로세스 시작 시간
        int last_ticks;
        long weight = weightset(n+add);
        int flag = 1;
        
        if(weight == 0)
        {
          printf(1,"ERROR! PID: %d, WEIGHT: %d\n", getpid(), weight);
        }

	while(counter <= TOTAL_COUNTER)
	{
	  counter++;
	  int print_counter = counter % PRINT_CYCLE;
	  
	  
	  if(print_counter == 0)
	  {
	    if(flag)
	    {
	      last_ticks = uptime(); //출력 시간
	      printf(1,"PID: %d, WEIGHT: %d, TIMES: %d ms\n", getpid(), weight, (last_ticks-first_ticks)*10);	  
	      flag = 0;
	    }
	    print_counter = PRINT_CYCLE;
	  }
        }
        printf(1,"PID: %d, terminated\n", getpid()); //현재의 프로세스 아이디(자식)를 가져오는 시스템콜 
        exit();
      }
    }
    
  //wait()시스템콜을 통해 자식프로세스 종료 기다리기
  if(pid != 0)
  {
  
    if(n == 1000)
    {
      printf(1, "fork claimed to work PNUM times!\n");
      exit();
    }

    for(; n > 0; n--)
    {
      if(wait() < 0)
      {
        printf(1, "wait stopped early\n");
        exit();
      }
    }
  
    if(wait() != -1){
      printf(1, "wait got too many\n");
      exit();
    }  
  }


  printf(1, "end of sdebug command\n");

}

