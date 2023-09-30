/* My homework for week11
   Name: Yuha Lee
   ID: C035328
*/

#include <stdio.h>

struct point{
	int x;
	int y;
};

void input_point(struct point*);
void print_point(struct point);
void swap_member(struct point*);

int main(){
	
	struct point a;

	input_point(&a);
	printf("Before swap: ");
	print_point(a);
	swap_member(&a);
	printf("After swap: ");
	print_point(a);
	return 0;
}

void input_point(struct point *p){

	printf("Enter the x value: ");
	scanf("%d", &(*p).x);
	printf("Enter the y value: ");
	scanf("%d", &(*p).y);
}

void print_point(struct point q){
	printf("x = %d, y = %d\n", q.x, q.y);
}

void swap_member(struct point *r){
	int tmp;
	tmp = r->x;
	r->x = r->y;
	r->y = tmp;
}
