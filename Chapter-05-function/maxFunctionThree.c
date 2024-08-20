#include <stdio.h>

/*function declearation*/
int maxBetweenThree(int x,int y,int z);

/*main function*/
int main(){

  int numberOne = 0;
  int numberTwo = 0;
  int numberThree=0;

  printf("%s","Enter Three numbers");
  scanf("%d%d%d",&numberOne,&numberTwo,&numberThree);


  /*function calling*/
  int result = maxBetweenThree(numberOne,numberTwo,numberThree);
  printf("%d",result);
}

int maxBetweenThree(int x,int y,int z){
  /*let the maximum number is x*/
  int max=0;
  max =x;
  if(y>max){
    /*change the max value to y*/
    max = y;
  }
  if (z>max){
    /*change the max value to z*/
    max = z;
  }

  return max;
}
