/* My homework for week13
   Name: Yuha Lee
   ID: C035328
*/

#include <stdio.h>

typedef struct {
	enum {INT, FLOAT} type;
	union {
		int i;
		float f;
	} u;
}Number;

void input_num_int(Number *n);
void input_num_float(Number *n);
void print_num(Number n);

int main(){
	Number a;

	input_num_int(&a);
	print_num(a);
	input_num_float(&a);
	print_num(a);

	return 0;
}

void input_num_int(Number *n){
	n->type = INT;
	n->u.i = 3;
}

void input_num_float(Number *n){
	n->type = FLOAT;
	n->u.f = 3.14;
}

void print_num(Number n){
	switch (n.type) {
		case INT:
			printf("%d\n", n.u.i);
			break;
		case FLOAT:
			printf("%f\n", n.u.f);
			break;
		default:
			break;
	}
}
