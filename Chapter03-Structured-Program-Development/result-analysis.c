#include<stdio.h>

int main(void){
  
  int passes=0;
  int failures=0;
  int student = 1;

  while(student<=10){

    printf("Enter Result 1==pass , 2==fail");
    int result = 0;
    scanf("%d",&result);

    if (result == 1){
      passes +=1;
    }
    else if (result == 2) {
     failures+=1; 
    }
    else {
      printf("Wrong Input\n");
    }

    student += 1;
  }

  printf("Passed Students --> %d",passes);
  printf("Failed Students --> %d",failures);
  return 0;
}
