#include <stdio.h>

int main(void){
  

  int lastNumber = 0;
  int resultSum = 0;

  while(lastNumber<=10){
    resultSum += lastNumber;
    lastNumber +=1 ;
  }

  printf("%d",resultSum);
  return 0;
}
