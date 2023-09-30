/* My homework for week11
   Name: Yuha Lee
   ID: C035328
*/

#include <stdio.h>

int main(){

	int score[3][5];
	int i, j, student_total, class_total = 0;
	
	for (i = 0; i < 3; i++){
		for(j = 0; j < 5; j++){
			printf("Student %d Subject %d: ", i + 1, j + 1);
			scanf("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 3; i++){
		student_total = 0;
		for (j = 0; j < 5; j++){
			student_total += score[i][j];
		}
		class_total += student_total;
		printf("Student %d Average: %.2f\n",i + 1, (float)student_total / 5);
	}

	printf("Class Average: %.2f\n",(float)class_total / 15);

	return 0;
}
