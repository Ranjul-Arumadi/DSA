#include <stdio.h>
/*
Main idea is that for array named A
A stored the base address of the array and while doing A+1 or A+2 we can incrementing the address by the size of the array data type

like for int 
A+1 = 100+4 if A=100
and NOT LIKE A+! = 100+1 !! 
*/
int main(void) {
  int a[3];

  printf("\nArray scanf using &\n");
  for(int i=0;i<3;i++){
    scanf("%d",&a[i]);
  }
  // normal printf using a[i]
  for(int i=0;i<3;i++){
    printf("%d \t",a[i]);
  }

  printf("\nArray scanf wiithout using &\n");
  for(int i=0;i<3;i++){
    //this works becuz a has the base address of the array and incrementing by 1 will increment the address by the array size and not increment the address value by 1 !
    scanf("%d",a+i); 
  }
  // printf using pointer concept
  for(int i=0;i<3;i++){
    //using deference operator we can get the value stored in the address
    printf("%d \t",*(a+i));
  }

  return 0;
}
