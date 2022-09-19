#include "types.h"
#include "user.h"
#include "stat.h"
#include "fcntl.h"

int main(int argc, char* argv[]){
  int i;
  int enter;
  char* array[8];
  
  if(argc <= 1){
    printf(1, "test");
    exit();
  }
  
  enter = trace(atoi(argv[1]));
  if(enter < 0){
    printf(1, "error\n");
    exit();
  }
  for(i=2;i<argc;i++){
    array[i-2] = argv[i];
  }
  exec(array[0], array);
  exit();  
}
