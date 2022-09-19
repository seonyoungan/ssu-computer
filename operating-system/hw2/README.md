### 1. project02-1
![pj2_05_실행화면](https://user-images.githubusercontent.com/74126735/190859810-47d92af1-2aa8-4dfd-b6da-d9b06954c6ce.png)

- quiz
  umalloc.c의 malloc 함수와 memcore 함수를 분석하여 malloc 전, 후 차이가 2048바이트가 아닌 이유를 설명헤라
  - 정답: morecore함수 안에서 sbrk를 통해 할당받을 때 기본적으로 할당 받는 최소 크기가 4096개의 nunit이므로 32,748(4096*8)이 된다. 그래서 main에서 할당한 2048바이트보다 훨씬 많은 메모리를 사용하게 된다.
  - 상세설명: 프로그램을 살펴보면 header는 long type으로 8byte를 가진다. malloc함수에는 memsizetest.c에서 넘긴 2048이 인자가 된다. 그리고 nbytes는 2048, sizeof(Header)는 8이므로 nunits는 256이 된다.(계산: (2048 + 8 - 1) / 8 + 1 ). if((prevp = freep) == 0){...}에서 처음일 때 실행될 때 prevp,freep,base는 자기 자신을 가리킬 것이고 size는 0이 된다. 그 후 for문이 실행될 것이다. if(p->s.size >= nunits){ ... }문의 경우 size가 unit보다 크면 실행되는 조건이지만, 0 > 256 상태이므로 이 조건문은 실행되지 않는다. 그 다음 if문(if(p == freep){ ... } 에서 morecore함수를 부른다. morecore함수 안에서 sbrk를 통해 할당받을 때 기본적으로 할당 받는 최소 크기가 4096개의 nunit이므로 32,748(4096*8)이 된다. 그래서 main에서 할당한 2048바이트보다 훨씬 많은 메모리를 사용하게 된다.

### 2. project02-2
![pj2-2_06_실행화면](https://user-images.githubusercontent.com/74126735/191097197-926d9e67-55b4-4252-a088-7af684c1ec96.png)
