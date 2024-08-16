#include <stdio.h>

int main(void){

  int i = 1;
  //loop 10 times and breaks at 5

  for(;i<=10;i++){
    printf("%d\n",i);
    if (i==5)
      break;

  }

  return 0;
}
