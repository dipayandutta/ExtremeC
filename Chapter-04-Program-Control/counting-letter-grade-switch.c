#include <stdio.h>

int main(){
  
  int aCount = 0;
  int bCount = 0;
  int cCount = 0;
  int dCount = 0;
  int fCount = 0;

  printf("Enter the letters Grade\n");
  puts("Enmter EOF Character at the end of the input \n");

  int grade =0;

  while((grade=getchar())!=EOF){
    switch(grade){
      case 'A':
      case 'a':
        ++aCount;
        break;
      case 'B':
      case 'b':
        ++bCount;
        break;
      case 'C':
      case 'c':
        ++cCount;
        break;
      case 'D':
      case 'd':
        ++dCount;
        break;
      case 'F':
      case 'f':
        ++fCount;
        break;
      case '\n': //ignore newlines
      case '\t': //ignore tabs
      case ' ': //ignore spaces in the input
        break;
      default:
        //catch all other characters
        printf("%s","Incorrect Letter Entered");
        puts("Enter New Grade \n");
        break;
    }//end switch
  }// end while
   //
   // Output Summary of result
   //

  printf("Total for each letter grades are  \n");
  printf("A: %d\n",aCount);
  printf("B: %d\n",bCount);
  printf("C: %d\n",cCount);
  printf("D: %d\n",dCount);
  printf("F: %d\n",fCount);

  return 0;
}

