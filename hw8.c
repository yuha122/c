/* My homework for week9
   Name: Yuha Lee
   ID: C035328
*/

#include <stdio.h>

int main(){
	int x = 1;
	int y = 2;
	int* p;
	int* q;

	p = &x;
	printf("p = &x: x=%d, y=%d, &x=0x%x, &y=0x%x, p=0x%x, *p=%d\n", x, y, &x, &y, p, *p);

	y = *p;
        printf("y = *p: x=%d, y=%d, &x=0x%x, &y=0x%x, p=0x%x, *p=%d\n", x, y, &x, &y, p, *p);

	*p = 0;
 	printf("*p = 0: x=%d, y=%d, &x=0x%x, &y=0x%x, p=0x%x, *p=%d\n", x, y, &x, &y, p, *p);

	*p = *p + 10;
        printf("*p = *p + 10: x=%d, y=%d, &x=0x%x, &y=0x%x, p=0x%x, *p=%d\n", x, y, &x, &y, p, *p);

	y = *p +1;
	printf("y = *p + 1: x=%d, y=%d, &x=0x%x, &y=0x%x, p=0x%x, *p=%d\n", x, y, &x, &y, p, *p);

	*p += 1;
  	printf("*p += 1: x=%d, y=%d, &x=0x%x, &y=0x%x, p=0x%x, *p=%d\n", x, y, &x, &y, p, *p);

	++*p;
 	printf("++*p: x=%d, y=%d, &x=0x%x, &y=0x%x, p=0x%x, *p=%d\n", x, y, &x, &y, p, *p);

	q = p;
 	printf("q = p: x=%d, y=%d, &x=0x%x, &y=0x%x, p=0x%x, *p=%d, q=0x%x, *q=%d\n", x, y, &x, &y, p, *p, q, *q);

	(*q)++;
	printf("(*q)++: x=%d, y=%d, &x=0x%x, &y=0x%x, p=0x%x, *p=%d, q=0x%x, *q=%d\n", x, y, &x, &y, p, *p, q, *q);
	
	q++;
	printf("q++: x=%d, y=%d, &x=0x%x, &y=0x%x, p=0x%x, *p=%d, q=0x%x, *q=%d\n", x, y, &x, &y, p, *p, q, *q);

	return 0;
}
