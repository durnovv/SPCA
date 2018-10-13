#include "complex.h"

#include <stdio.h>



int main(int argc, char *argv[]) {
	
		
	Complex x, y, c; 
	x.a = 1; x.b = 2;
	y.a = 3; y.b = 4;
	
	
	c = divide(x, y);
	printf("a = %f\n", c.a);
	printf("b = %f\n", c.b);

	return 0;
}



//with pointers (buggy) 
/*
int main(int argc, char *argv[]) {
	
	//Complex xx, yy;
	
	Complex *x, *y; 
	x->a = 1; x->b = 2;
	y->a = 3; y->b = 4;
	
	//x = xx; y = yy;
	add(x, y);
	return 0;
}
*/
