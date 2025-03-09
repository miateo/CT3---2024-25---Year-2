#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

#define inPipe "o"
#define outPipe "i"

int main(){

  mkfifo(inPipe,0666);
  mkfifo(outPipe,0666);

  int lett, scrit;
  scrit = open(outPipe, O_WRONLY);
  lett = open(inPipe, O_RDONLY);
  if(lett < 0){
    perror("Errore pipe non aperta");
    exit(1);
  }
  //printf("check");
  char c;
  while(read(lett,&c,1)){
    //printf("check2");
    int count = 0;
    int k;
    if(count == 0){
      // printf("%c", c);
      k = 'A' - c;
      count = 1;
    }
    c = 'A';
    write(scrit, &c, 1);
    do{
      read(lett,&c,1);
      c = c + k;
      // printf("%c\n", r);
      write (scrit, &c, 1);
    }while(c != '#');
    count = 0;
  }
  close(lett);
  unlink(inPipe);
  unlink(outPipe);
  return 0;
}
