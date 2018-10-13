#include "complex.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>



Complex add(Complex x, Complex y) {
	Complex res; 
	res.a = x.a + y.a;
	res.b = x.b + y.b; 	
	return res;
}

Complex subtract(Complex x, Complex y) {
	Complex res; 
	res.a = x.a - y.a;
	res.b = x.b - y.b; 	
	return res;
}

Complex multiply(Complex x, Complex y) {
	Complex res; 
	res.a = x.a*y.a - x.b*y.b;
	res.b = x.a*y.b + x.b*y.a; 	
	return res;
}

Complex divide(Complex x, Complex y) {
	Complex res; 
	res.a = (x.a*y.a + x.b*y.b) / (y.a*y.a + y.b*y.b);
	res.b = (x.b*y.a - x.a*y.b) / (y.a*y.a + y.b*y.b);
	return res;
}

extern struct complex_set *alloc_set(Complex c_arr[], int size) {
	
	
	c_arr = malloc(size * sizeof(Complex));
	if (c_all == NULL)
        {
            fprintf(stderr, "ERROR: null pointer\n");
            exit(-1);
        }
    
    	
	
	struct complex_set *set;
	set = malloc(size*sizeof(Complex));
	
	if (set == NULL)
        {
            fprintf(stderr, "ERROR: null pointer\n");
            exit(-1);
        }
    
	
	set->num_points_in_set = size;
	set->points = c_arr;
}

extern free_set(struct complex_set *set) {
	free(set->points);
	free(set);
} 


//with pointers (buggy)
/*
Complex *add(Complex *x, Complex *y) {
	Complex res; 
	res.a = x->a + y->a;
	res.b = x->b + y->b; 	
	return res;
}

Complex *subtract(Complex *x, Complex *y) {
	Complex res; 
	res.a = x->a - y->a;
	res.b = x->b - y->b; 	
	return res;
}

Complex *multiply(Complex *x, Complex *y) {
	Complex res; 
	res.a = x->a*y->a - x->b*y->b;
	res.b = x->a*y->b + x->b*y->a; 	
	return res;
}

Complex *divide(Complex *x, Complex *y) {
	Complex res; 
	res.a = (x->a*y->a + x->b*y->b) / (y->a*y->a + y->b*y->b);
	res.b = (x->b*y->a - x->a*y->b) / (y->a*y->a + y->b*y->b);
	return res;
}
*/



