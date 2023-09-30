/* 
My Homework For Week4
Name: Yuha Lee
ID: C035328
*/

#include <stdio.h>

int main(){

int a, b;
float f;

printf("Enter the value of a : ");
scanf("%d", &a);
printf("Enter the value of b : ");
scanf("%d", &b);
b = b << 1;
f = (float) a / b * b;
printf("The value of f is %f\n", f);


return 0;
}
