#include <stdio.h>

void add (int *n);
int main(void){
  int num=2;
  printf("Value of the variable before function calling=%d\n",num);
  /*function calling*/
  add(&num);
  return 0;
}

void add(int *number){

  printf("%d\n",*number);
  int add=0;
  add = 10 +*number;
  printf("%d\n",add);
}
