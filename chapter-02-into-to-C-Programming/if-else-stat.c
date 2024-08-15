#include <stdio.h>

int main(void){
  
  printf("Enter two integers\n");
  printf("the relationship they satisfy \n");

  int number1 = 0;
  int number2 = 0;

  scanf("%d %d",&number1 ,&number2);

  if (number1 == number2){
    printf("%d is eqaual to %d\n",number1,number2);
  }

  if (number1 != number2){
    printf("%d is not equal to %d\n",number1,number2);
  }

  if (number1<number2){
    printf("%d is less than %d",number1,number2);
  }

  if (number1>number2){
    printf("%d is greater than %d",number1,number2);
  }
  if( number1 <= number2){
    printf("%d is less than equal to %d\n",number1,number2);
  }

  if (number1 >= number2){
    printf("%d is greater than eqaul to %d \n",number1,number2);
  }
}
