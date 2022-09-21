#include "types.h"
#include "user.h"
#include "stat.h"
#include "fcntl.h"

int main(int argc, char* argv[]){

  int pid;
  //int tracemask;
  pid = fork();
  trace(atoi(argv[1]));
  
  if(argc < 3){
    printf(1, "error: ssu_trace [mask] [command]\n");
    exit();
  }

  if(pid > 0) {
    wait();
    exit();
  }
  if(pid == 0){
    exec(argv[2], argv+2);
    exit();
  }
}
