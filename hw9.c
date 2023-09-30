/* My homework for week10
   Name: Yuha Lee
   ID: C035328
*/

#include <stdio.h>

void print_average(int *first, int *second, int n);

int main(){
	
	int english[2];
	int math[2];
	
	printf("Enter the midterm exam score of the English subject: ");
	scanf("%d", &english[0]);
	printf("Enter the final exam score of the English subject: ");
	scanf("%d", &english[1]);

        printf("Enter the midterm exam score of the Math subject: ");
        scanf("%d", &math[0]);
        printf("Enter the final exam score of the Math subject: ");
        scanf("%d", &math[1]);
	
	print_average(english, math, 2);

	
	return 0;
}

void print_average(int *first, int *second, int n){
	int i, total_first = 0, total_second = 0;
	double avg_first, avg_second;

	for (i = 0; i < n; i++){
		total_first += first[i];
		total_second += second[i];
	}
	
	avg_first = (float)total_first / n;
	avg_second = (float)total_second / n;
	
	printf("The average score of the first subject: %.1f\n", avg_first);
	printf("The average score of the second subject: %.1f\n", avg_second);

}
