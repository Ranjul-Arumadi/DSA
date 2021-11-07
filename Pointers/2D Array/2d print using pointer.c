#include <stdio.h>

int main(void) {
  int a[2][2]={1,2,3,4};

  int *p;

  p = a[0];
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      printf("%d \t",*(*(a+i)+j));
    }
    printf("\n");
  }


  return 0;
}
