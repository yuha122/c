/* My homework for week7
   Name: Yuha Lee
   ID: C035328
*/

#include <stdio.h>

int main(){

	int i, total = 0,  subjects[5];
	float avg; 

	for (i = 0; i < 5; i++){
		printf("Enter a subject%d score: ", i+1);
		scanf("%d", &subjects[i]);
		total += subjects[i];
	}

	avg = (float)total / 5;

	printf("Sum = %d, Average = %.2f\n", total, avg);

	return 0;
}
