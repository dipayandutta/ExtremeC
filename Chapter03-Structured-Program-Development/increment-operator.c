#include <stdio.h>

int main(void){
  
  int number = 3;

  printf("Number as Stored %d\n",number);
  printf("Number postincrement operation %d\n",number++);
  printf("Number after the Post Increament Operation %d\n",number);


  number = 3;
  printf("Number as stored %d\n",number);
  printf("Number on PreIncreament %d\n",++number);
  printf("Number after the Pre Increament Operation is performed %d",number);
  printf("\n");
  return 0;
}
