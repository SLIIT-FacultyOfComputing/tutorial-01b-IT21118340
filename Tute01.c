/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
	float subject1 = 0;
  float subject2 = 0;

// input marks for 1st subjects
  printf("Enter marks for first subjects: ");
  scanf("%f", &subject1);

// input marks for 2nd subjects
  printf("Enter marks for second subjects: ");
  scanf("%f", &subject2);

//calculate and output results
  printf("Average mark: %.2f", (subject1+subject2)/2.0);

  
  return 0;
}

