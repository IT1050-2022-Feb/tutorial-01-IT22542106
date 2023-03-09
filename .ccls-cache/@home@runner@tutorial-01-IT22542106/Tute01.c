/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  int sub_1, sub_2, ;
  float avg;

  printf("Marks for subject 1: ");
  scanf("%d", &sub_1);

  printf("Marks for subject 2: ");
  scanf("%d", &sub_2);

  avg = (sub_1 + sub_2) / 2;

  printf("Average : %.2f", avg)

      return 0;
}
