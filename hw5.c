#include <stdio.h>

/* 
My homework for week5
Name: Yuha Lee
ID: C035328
*/

int main(){

	int i, j;
	
	for (i = 1; i < 10; i++){
		for(j = 2; j < 10; j++)
			printf("%d*%d=%2d ", j, i, j*i);
		printf("\n");
	}

	return 0;
}
