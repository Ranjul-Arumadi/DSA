/*The selection sort may be defined as another algorithm for sorting the list in which the array is bifurcated into two arrays where the first array is supposed to be empty while the second array consists of the unsorted list of values. The program searches for the smallest values in the second array and when the value is found, it has been moved to the beginning of the first array that was empty. The approach is repeated again and the next smallest values will be shifted to the second index of the first array. The processes will keep on repeating until the second array became empty.

The below program is the coding implementation of the selection sort algorithm. Once the program runs successfully, it will request the user to input the count of values that they are willing to sort. Once the count is obtained, the program will ask the user to input the values for the array that has to be sorted. The value is then processed using nested for loop in order to sort the numbers. The if condition checking has also been involved here to check the smallest number.

The processes will be repeated until the first list is full of the sorted list. Meanwhile, the programs keep its primary focus to check if the second array is having value and if it is found positive, the program runs the sorting algorithm again. Though it sorts the list in easy manner, it may take a bit more time as compared to the other algorithms. But by the end, the result it will generate will be the same as the other sorting algorithms.

Note:
In implementation only a single input array is used and the values are swapped and sorted.
*/
#include<stdio.h>
#include<conio.h>
void main() {

  int size, i, j, minimum, temp_value;
  int a[20];

  printf("\n Enter the Number of Elements: ");
  scanf("%d", & size);

  printf("\n Enter %d Elements: ", size);
  for (i = 0; i < size; i++) {
    scanf("%d", & a[i]);
  }

  for (i = 0; i < size - 1; i++) {

    minimum = i;

    for (j = i + 1; j < size; j++) {
      if (a[minimum] > a[j])
        minimum = j;
    }
  /*This checking is done to remove unwanted swap. This state is a already sorted position for the present value*/
    if (minimum != i) {
      temp_value = a[i];
      a[i] = a[minimum];
      a[minimum] = temp_value;
    }

  }

  printf("\n The Sorted array in ascending order: ");
  for (i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  getch();
}