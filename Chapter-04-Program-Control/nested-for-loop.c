#include <stdio.h>

int main(void){
  
  int x,i,j;

  printf("%s","Enter an Integer in the range of 1-20");
  scanf("%d",&x);
  
  if (x<=20){
    for (i=1;i<=x;i++){
      for(j=1;j<=x;j++){
        if (j==i)
          printf("%c","@");
        else
          printf(" ");
      }
      printf("\n");
    }
  }
  else{
    printf("%s","Input Value is greater than asking ");
    printf("%d\n",x);
  }
  return 0;
}
