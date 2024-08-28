#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main(void){
  
  int arr[MAX],i,RandNo;

  for(i=0;i<MAX;i++){
    RandNo = rand() % MAX;
    arr[i] = RandNo;
  }
  

  /*Display Numbers in the array*/
  for (i=0;i<MAX;i++){
    printf("Array[%d] ==> %d\n",i,arr[i]);
  }
  return 0;
}
