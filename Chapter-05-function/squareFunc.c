#include <stdio.h>

int square(int num); /*function declearation*/

int main(void){
  for (int x=1;x<=10;x++){
    printf("%d",square(x)); /*function calling*/
  }
  return 0;
}

/*function defination*/
int square(int num){
  return num*num;
}
