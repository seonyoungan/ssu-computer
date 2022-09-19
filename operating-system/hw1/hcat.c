#include "types.h"
#include "stat.h"
#include "user.h"

char buf[1];
int enter = 0;
int count = 0;

void
hcat(int fd)
{
  int n;

  while((n = read(fd, buf, sizeof(buf))) > 0) {
    if (write(1, buf, n) != n) {
      printf(1, "hcat: write error\n");
      exit();
    }
    if(buf[0] == '\n'){
    	count++;
    	if(enter == count){
    		break;
    	}
    }
  }
  if(n < 0){
    printf(1, "hcat: read error\n");
    exit();
  }
}

int
main(int argc, char *argv[])
{
  int fd, i;

  if(argc < 1){
    hcat(0);
    exit();
  }
  
  enter = atoi(argv[1]);

  for(i = 2; i < argc; i++){
    if((fd = open(argv[i], 0)) < 0){
      printf(1, "hcat: cannot open %s\n", argv[i]);
      exit();
    }
    hcat(fd);
    close(fd);
  }
  exit();
}
