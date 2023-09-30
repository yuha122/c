/* My homework for week6
   Name: Yuha Lee
   ID: C035328
*/

#include <stdio.h>

int AddUntil(int);

int main(){
	int i, t;

	printf("Enter an integer between 1 and 10: ");
	scanf("%d", &i);
	if (i >= 0 && i <= 10){
		t = AddUntil(i);
		printf("Sum of integers from %d to %d: %d\n", 1, i, t);
	}else
		printf("Sorry, invalid input!\n");

	return 0;
}

int AddUntil(int i){
	int j,  sum = 0;

	for (j = 1; j < i+1; j++){
		sum += j;
	}

	return sum;
}	
