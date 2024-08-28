#include <stdio.h>

int main(){
  
  int i =0,n,arr[20];

  printf("Enter number of elements \n");
  scanf("%d",&n);

  printf("Enter the elements \n");
  for (i=0;i<n;i++){
    printf("\n Arr[%d]= ",i);
    scanf("%d",&arr[i]);
  }

  printf("The Array Elements are \n");
  for (i=0;i<=n;i++){
    printf("Array[%d] = %d\n",i,arr[i]);
  }
  return 0;
}
