#include <stdio.h>

/*enum to create a user defined data type*/
enum week {Sunday,Monday,Tuesday,Wednessday,Thursday,Friday,Saturday};

int main(){
  enum week today;
  int number;
  today = Wednessday;
  /*enum type conversion*/
  number = (enum week)10;
  printf("Day %d",today);
  printf("\n");
  printf("%d\n",number);

  return 0;
}
