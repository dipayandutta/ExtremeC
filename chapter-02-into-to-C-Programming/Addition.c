#include <stdio.h>

int main(void){
  int integer1 = 0;
  int integer2 = 0;

  printf("Enter first Integer:");
  scanf("%d",&integer1);
  printf("\n");
  printf("Enter Second Integer:");
  scanf("%d",&integer2);

  int sum =0;
  sum = integer1 + integer2;


  printf("Addition Result is ==> %d\n",sum);

  return 0;
}
