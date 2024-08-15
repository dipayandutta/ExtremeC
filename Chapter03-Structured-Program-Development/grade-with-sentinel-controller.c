#include <stdio.h>

int main(void){

  int total = 0;
  int counter =0;

  printf("Enter Grade,-1 to end\n");
  int grade =0;
  scanf("%d",&grade);

  // loop while sentinel value not yet read from the user
  while( grade != -1){
    total += grade;
    counter += 1;

    //take next grade from the user
    printf("Enter next grade or -1 to end\t");
    scanf("%d",&grade);
  }

  if (counter!=0){
    double average = (double) total/counter;

    printf("Average is --> %f",average);
  }
  else{
  puts("No grades were entered!");
  }

  return 0;
}
