/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300
*/

#include <stdio.h>

int main() {
// declaring variables
	float distance = 0;
  
// input distance
	printf("Distance -> ");
	scanf("%f", &distance);

// calculate and display results
	if (distance <= 30){
		printf("Amount = %.2f", distance*50.00);
	} else {
		printf("Amount = %.2f", 1500.00 + (distance-30.00)*40.00);
	}
  
  return 0;
}
