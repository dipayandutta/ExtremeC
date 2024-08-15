#include <stdio.h>

int main(void){
  int total = 0;
  int counter = 1;

  while(counter <= 10){
    printf("%s","Enter Grade:");
    int grade = 0;
    scanf("%d",&grade);
    total += grade;
    counter += 1;

  }

  int average = total/10;
  printf("Class Average %d",average);
}
