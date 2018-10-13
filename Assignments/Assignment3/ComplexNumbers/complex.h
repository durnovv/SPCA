#include <stdio.h>

typedef struct complex_st {
	double a;
	double b;
} Complex;

struct complex_set {
	int num_points_in_set;
	Complex *points; 
};

//with pointers

extern Complex add(Complex x, Complex y);
extern Complex subtract(Complex x, Complex y);
extern Complex multiply(Complex x, Complex y);
extern Complex divide(Complex x, Complex y);

extern struct complex_set *alloc_set(Complex c_arr[], int size); 
extern free_set(struct complex_set *set); 

/*
extern Complex *add(Complex *x, Complex *y);
extern Complex *subtract(Complex *x, Complex *y);
extern Complex *multiply(Complex *x, Complex *y);
extern Complex *divide(Complex *x, Complex *y);
*/
