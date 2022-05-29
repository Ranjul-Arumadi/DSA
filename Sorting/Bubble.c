/*
Bubble sort may be defined as the sorting algorithm that follows the approach of replacing the value in the first index with the smallest value in the array and keep it repeating until the list is sorted. It is a very simple way of performing sorting. In this way to sort the array, the value has to be assigned to the array in the beginning before starting the sorting.

 Below is the program to sort the array using bubble sort where the values have been taken from the user. Once the program is compiled and run, it will ask the user for the number of elements that they want to sort. Once the number is provided, the program will ask the user to provide values equivalent to the count that they have provided. The values will be stored in the array and will be processed further using nested for loop together with decision making using “if” in order to sort the array.
 
The first smallest value found in the array has been moved to the first index of the array and then the search begins again to find the other smallest number. Once the next smallest number is found, it replaces the value in the second index and the process keeps on repeating until the array consists of a sorted list of values. 
*/
#include <stdio.h>

int main() {
  int total_count, counter, counter1, swap_var;
  int array[20];

  printf("How many number you want to input?\n");
  scanf("%d", & total_count);

  printf("Please enter %d integers that has to be sorted\n", total_count);
  for (counter = 0; counter < total_count; counter++)
    scanf("%d", & array[counter]);

    //sorting
  for (counter = 0; counter < total_count - 1; counter++) {
    for (counter1 = 0; counter1 < total_count - counter - 1; counter1++) {
      if (array[counter1] > array[counter1 + 1]) /* For decreasing order use < */ {
        swap_var = array[counter1];
        array[counter1] = array[counter1 + 1];
        array[counter1 + 1] = swap_var;
      }
    }
  }
  
  printf("Below is the list of elements sorted in ascending order:\n");
  for (counter = 0; counter < total_count; counter++)
    printf("%d\n", array[counter]);
  return 0;
}