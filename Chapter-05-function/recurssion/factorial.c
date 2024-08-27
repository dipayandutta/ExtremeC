#include <stdio.h>

int Fact(int);

int main(void){
  int num,Factorial;
  printf("\n Enter a number\t ");
  scanf("%d",&num);
  Factorial=Fact(num);

  printf("%d",Factorial);
  return 0;
}

int Fact(int n){
  if(n==1){
    return 1;
  }
  else{
    n = n *Fact(n-1);
    
  }
  return n;
}
