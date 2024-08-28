#include <stdio.h>

int main(){
  
  int i,n,arr[20],pos,large,second_large,second_large_pos;

  printf("\n Enter the number of Elements \n",n);

  scanf("%d",&n);

  for (i=0;i<n;i++){
    printf("\n Enter %d th number \n",i);
    scanf("%d",&arr[i]);
  }
  large = arr[0];
  pos = 0;
  /*finding the largest number*/
  for (i<1;i<n;i++){
    if(arr[i]>large){
      large = arr[i];
      pos = i;
    }
  }
  /*finding the second largest number*/
  second_large = arr[n-pos-1];
  for (i=0;i<n;i++){
    if (i != pos){
      if (arr[i]>second_large)
        second_large = arr[i];
        second_large_pos = i;
    }
  }
  /*Display the entered array*/
  printf("\n Array \n");
  for (i=0;i<n;i++){
    printf("\n arr[%d] ==> %d",i,arr[i]);
  }
  printf("Largest Number --> %d and the position is ==> %d\n",large,pos);
  printf("Second Largest Number --> %d and the position is ==> %d \n",second_large,second_large_pos);
  return 0;
}
