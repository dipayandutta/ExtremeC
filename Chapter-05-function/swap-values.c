#include <stdio.h>

void swap_call_by_value(int,int);
void swap_call_by_ref(int* , int *);

int main(void){
  
  int a = 10;
  int b = 20;
  int c = 30;
  int d = 40;
  printf("Values Inside main function -->\n");
  printf("a=%d\n",a);
  printf("b=%d\n",b);
  printf("c=%d\n",c);
  printf("d=%d\n",d);

  swap_call_by_value(a,b);
  swap_call_by_ref(&c,&d);
  return 0;
}

void swap_call_by_value(int a, int b){
  int temp;
  temp =a;
  a=b;
  b=temp;
  printf("a == %d\n",a);
  printf("b== %d\n",b);
}

void swap_call_by_ref(int *number1 , int *number2){
  int temp;
  temp = *number1;
  *number1 = *number2;
  *number2 = temp;

  printf("%d\n",*number1);
  printf("%d\n",*number2);
}
