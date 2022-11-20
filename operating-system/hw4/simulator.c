#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fcntl.h>
#include <stdbool.h>
#include <string.h>


void optimal(int frame_num, int frame_counter, int *frame_reference);
void FIFO(int frame_num, int frame_counter, int *frame_reference);
void LIFO(int frame_num, int frame_counter, int *frame_reference);
void LRU(int frame_num, int frame_counter, int *frame_reference);
void LFU(int frame_num, int frame_counter, int *frame_reference);
void SC(int frame_num, int frame_counter, int *frame_reference);
void ESC();
void AII();

void printTable(int frame_num);
int isEmptyFrame(int *frame_size, int frame_num, int new_size);
int isOldFrame(int num, int frame_counter, int frame_value, int *frame_reference);

int main(int argc, char *argv[])
{
	/*UI메뉴 변수*/
	int num=0; //알고리즘 선택 번호
	int select_A[3] = {0,0,0}; //번호를 저장할 배열(초기값: 0)
	int frame_num; //프레임 개수 선택
	int data_num; //데이터 입력 방식  선택
	char ch; //종료버튼 입력받는 변수
	
	/*파일 입출력 변수*/
	FILE* fp; //사용자 생성 파일 가져올 파일 포인터
	FILE* fp2; //출력결과 저장할 파일포인터
	char fuser[1500] = {0, }; //파일의 저장공간

	/*page frame 변수*/
	int frame_counter=0; //frame counter check
	int frame_reference[500]; // frame string 500개 (random, userfile) 


	
	/*알고리즘 구현 변수*/

	printf("-----algorithm simulator menu-----\n");
	printf("A. 알고리즘 선택\n");
	printf("B. 프레임 개수 입력\n");
	printf("C. 데이터 입력 방식 선택\n");
	printf("D. 종료\n");
	printf("----------------------------------\n");
	
	if(ch=='d' || ch=='D')
	{
		printf("프로그램을 종료합니다.");
		exit(0);
	}
	else
	{
		/*UI메뉴 - A. 알고리즘 선택*/
		printf("Page Replacement 알고리즘 시뮬레이터 번호를 선택하시오 (최대 3개) >> ");
		scanf(" %d", &num); //번호 입력 받기
		printf("(1) Optimal (2) FIFO (3) LIFO (4) LRU (5) LFU (6) SC (7) ESC (8) AII\n");
		printf("번호 선택 >> ");

		if (num > 3)
		{
			printf("번호는 3개까지 선택 가능합니다.\n");
			exit(0);
		}
		else
		{
			for(int i=0; i < num; i++)
			{
				scanf(" %d", &select_A[i]);
			}
		}
		
		/*B. 프레임 개수*/
		printf("페이지 프레임 개수를 입력하시오(3-10) >> ");
		scanf("%d", &frame_num);
		if(frame_num < 3 || frame_num > 10)
		{
			printf("프레임 개수는 3-10 사이의 정수로 입력하세요.\n");
			exit(0);
		}
		
		
		//저장할 파일 포인터
		//if((fp2 = fopen("result.txt", "w")) == NULL) //쓰기모드로 파일 열기 시도
		//{
		//	fprintf(stderr, "파일 열기 실패\n");
		//	exit(1);
		//}
		/*C. 데이터 입력 방식 선택(1,2)*/
		printf("데이터 입력 방식을 선택하시오.(1,2)\n");
		printf("(1) 랜덤하게 생성 (2) 사용자 생성 파일 오픈 >> ");
		scanf(" %d", &data_num);
		if(data_num == 1) // 랜덤하게 생성
		{
			//랜덤 구현
			srand((int)time(NULL));
			for (frame_counter=0; frame_counter<500; frame_counter++)
			{
				frame_reference[frame_counter] = rand()%30+1; //1~30의 숫자 중 랜덤하게 담기(저장)
			}
				
			
			/*알고리즘 선택*/
			switch(select_A[0]) //첫번째로 선택한 알고리즘 번호에 따른 알고리즘 실행
			{
				case 1:
					printf("--------Optimal algorithm---------");
					printTable(frame_num);
					optimal(frame_num, frame_counter, frame_reference);
					//result = optimal(frame_num, frame_counter, frame_reference);
					break;
				case 2:
					printf("--------FIFO algorithm------------");
					printTable(frame_num);
					FIFO(frame_num, frame_counter, frame_reference);
					break;
				case 3:
					printf("--------LIFO algorithm------------");
					printTable(frame_num);
					LIFO(frame_num, frame_counter, frame_reference);
					break;
				case 4:
					printf("--------LRU algorithm------------");
					printTable(frame_num);
					LRU(frame_num, frame_counter, frame_reference);
					break;
				case 5:
					printf("--------LFU algorithm------------");
					printTable(frame_num);
					LFU(frame_num, frame_counter, frame_reference);
					break;
				case 6:
					printf("--------SC algorithm-------------");
					printTable(frame_num);
					SC(frame_num, frame_counter, frame_reference);
					break;
				case 7:
					printf("--------ESC algorithm------------");
					printTable(frame_num);
					ESC();
					break;
				case 8:
					printf("--------AII algorithm------------");
					printTable(frame_num);
					AII();
					break;
				default:
					break;
			}
			
			
			switch(select_A[1]) //두번째로 선택한 알고리즘 번호에 따른 알고리즘 실행
			{
				case 1:
					printf("--------Optimal algorithm---------");
					printTable(frame_num);
					optimal(frame_num, frame_counter, frame_reference);
					break;
				case 2:
					printf("--------FIFO algorithm------------");
					printTable(frame_num);
					FIFO(frame_num, frame_counter, frame_reference);
					break;
				case 3:
					printf("--------LIFO algorithm------------");
					printTable(frame_num);
					LIFO(frame_num, frame_counter, frame_reference);
					break;
				case 4:
					printf("--------LRU algorithm------------");
					printTable(frame_num);
					LRU(frame_num, frame_counter, frame_reference);
					break;
				case 5:
					printf("--------LFU algorithm------------");
					printTable(frame_num);
					LFU(frame_num, frame_counter, frame_reference);
					break;
				case 6:
					printf("--------SC algorithm-------------");
					printTable(frame_num);
					SC(frame_num, frame_counter, frame_reference);
					break;
				case 7:
					printf("--------ESC algorithm------------");
					printTable(frame_num);
					ESC();
					break;
				case 8:
					printf("--------AII algorithm------------");
					printTable(frame_num);
					AII();
					break;
				default:
					break;
			}
			
			switch(select_A[2]) //세번째로 선택한 알고리즘 번호에 따른 알고리즘 실행
			{
				case 1:
					printf("--------Optimal algorithm---------");
					printTable(frame_num);
					optimal(frame_num, frame_counter, frame_reference);
					break;
				case 2:
					printf("--------FIFO algorithm------------");
					printTable(frame_num);
					FIFO(frame_num, frame_counter, frame_reference);
					break;
				case 3:
					printf("--------LIFO algorithm------------");
					printTable(frame_num);
					LIFO(frame_num, frame_counter, frame_reference);
					break;
				case 4:
					printf("--------LRU algorithm------------");
					printTable(frame_num);
					LRU(frame_num, frame_counter, frame_reference);
					break;
				case 5:
					printf("--------LFU algorithm------------");
					printTable(frame_num);
					LFU(frame_num, frame_counter, frame_reference);
					break;
				case 6:
					printf("--------SC algorithm-------------");
					printTable(frame_num);
					SC(frame_num, frame_counter, frame_reference);
					break;
				case 7:
					printf("--------ESC algorithm------------");
					printTable(frame_num);
					ESC();
					break;
				case 8:
					printf("--------AII algorithm------------");
					printTable(frame_num);
					AII();
					break;
				default:
					break;
			}
			

			
		}
		else if(data_num == 2) //사용자 생성 파일 오픈
		{
			if((fp = fopen("user_reference.txt", "r")) == NULL) //파일 열기 시도
			{
				fprintf(stderr, "파일 열기 실패\n");
				exit(1);
			}
			
			fread(fuser, sizeof(fuser), 1, fp); //파일 읽기
			char *ptr = strtok(fuser, " "); //띄어쓰기 기준으로 각 문자열 토큰화
			while(ptr != NULL) //frame_reference 배열에 토큰화한 요소 담기(저장)
			{
				for (frame_counter=0; frame_counter<500; frame_counter++)
				{
					frame_reference[frame_counter] = atoi(ptr);
					ptr = strtok(NULL, " ");
				}
			}
			/*알고리즘 선택*/
			switch(select_A[0]) //첫번째로 선택한 알고리즘 번호에 따른 알고리즘 실행
			{
				case 1:
					printf("--------Optimal algorithm---------");
					printTable(frame_num);
					optimal(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기
				case 2:
					printf("--------FIFO algorithm------------");
					printTable(frame_num);
					FIFO(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기
				case 3:
					printf("--------LIFO algorithm------------");
					printTable(frame_num);
					LIFO(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기
				case 4:
					printf("--------LRU algorithm------------");
					printTable(frame_num);
					LRU(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기 
				case 5:
					printf("--------LFU algorithm------------");
					printTable(frame_num);
					LFU(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기 
				case 6:
					printf("--------SC algorithm-------------");
					printTable(frame_num);
					SC(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기 
				case 7:
					printf("--------ESC algorithm------------");
					printTable(frame_num);
					ESC();
					break;
					fclose(fp); //파일 닫기 
				case 8:
					printf("--------AII algorithm------------");
					printTable(frame_num);
					AII();
					break;
					fclose(fp); //파일 닫기 

				default:
					break;
			}
			
			switch(select_A[1]) //두 번째로 선택한 알고리즘 번호에 따른 알고리즘 실행
			{
				case 1:
					printf("--------Optimal algorithm---------");
					printTable(frame_num);
					optimal(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기
				case 2:
					printf("--------FIFO algorithm------------");
					printTable(frame_num);
					FIFO(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기
				case 3:
					printf("--------LIFO algorithm------------");
					printTable(frame_num);
					LIFO(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기
				case 4:
					printf("--------LRU algorithm------------");
					printTable(frame_num);
					LRU(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기 
				case 5:
					printf("--------LFU algorithm------------");
					printTable(frame_num);
					LFU(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기 
				case 6:
					printf("--------SC algorithm-------------");
					printTable(frame_num);
					SC(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기 
				case 7:
					printf("--------ESC algorithm------------");
					printTable(frame_num);
					ESC();
					break;
					fclose(fp); //파일 닫기 
				case 8:
					printf("--------AII algorithm------------");
					printTable(frame_num);
					AII();
					break;
					fclose(fp); //파일 닫기 

				default:
					break;
			}

			switch(select_A[2]) //세번째로 선택한 알고리즘 번호에 따른 알고리즘 실행
			{
				case 1:
					printf("--------Optimal algorithm---------");
					printTable(frame_num);
					optimal(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기 
				case 2:
					printf("--------FIFO algorithm------------");
					printTable(frame_num);
					FIFO(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기
				case 3:
					printf("--------LIFO algorithm------------");
					printTable(frame_num);
					LIFO(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기
				case 4:
					printf("--------LRU algorithm------------");
					printTable(frame_num);
					LRU(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기 
				case 5:
					printf("--------LFU algorithm------------");
					printTable(frame_num);
					LFU(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기 
				case 6:
					printf("--------SC algorithm-------------");
					printTable(frame_num);
					SC(frame_num, frame_counter, frame_reference);
					break;
					
					fclose(fp); //파일 닫기 
				case 7:
					printf("--------ESC algorithm------------");
					printTable(frame_num);
					ESC();
					break;
					fclose(fp); //파일 닫기 
				case 8:
					printf("--------AII algorithm------------");
					printTable(frame_num);
					AII();
					break;
					fclose(fp); //파일 닫기 

				default:
					break;
			}
		}
		else 
		{
			printf("데이터 입력 방식은 1 또는 2 중에서 선택하세요.\n");
			exit(1);
		}
	}
}


/*알고리즘 구현함수 */
