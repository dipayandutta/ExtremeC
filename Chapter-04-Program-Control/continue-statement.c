#include <stdio.h>


int main(void){

  int i = 1;

  for (;i<=10;++i){

    if (i==5){
      printf("Skipped number 5\n");
      continue;
    }
  printf("%d\n",i);
  }
  return 0;
}
