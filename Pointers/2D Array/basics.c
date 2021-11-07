#include <stdio.h>
/*
Basic : 

2d arrays are array of arrays.

a[2][2] = {1,2,3,4};

here {{1,2},{3,4}}
      arr 1,arr 2
so  a = a[0],a[1]

so a[1]+1 = {3,4}+1 =  4 

*/
int main(void) {
  int a[2][2]={1,2,3,4};

  int *p;

  // p=a; is error because in 2d array a points to the first array in the whole array
 // that is it points to the first array in the array of arrays
  
  // p = a; //INVALID
  p = a[0]; //VALID
  p = &a[0][0]; //VALID
  // p = a[0][0]; //INVALID because here it gives the arra value
  printf("Array address=%p",p);


  return 0;
}
