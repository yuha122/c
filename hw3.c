/* 
 Homework for week3
 Name: Yuha Lee
 ID: C035328
*/

#include <stdio.h>

int main(){
	int a, b, x;
	printf("Enter the value of a : ");
	scanf("%d", &a);
	printf("Enter the value of b : ");
	scanf("%d", &b);
	x =(a > 2 || b < 3);
	printf("The value of x is  %d\n",x); 

	return 0;
}
