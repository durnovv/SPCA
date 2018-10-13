#include <stdio.h>



int main(int argc, char* argv[]) {

	typedef struct list_el {
		unsigned val; 
		struct list_el *next;
	} el_t;
	
	el_t my_other_list;

    my_other_list.val = 12; 
    printf("%d\n", my_other_list.val);

//	struct list_el my_list; 	
	
//	my_list.val = 1; 
	
//	unsigned a = my_list.val; 
//	printf("%o\n", a);
	
	FILE *f = NULL;
	
	return 0;
}







//typedef stuff (didn't catch the whole example)
/*
int main(int argc, char* argv[]) {
	
	typedef int fiveints[5];
	fiveints a = {1,2,2,3,4};
	
	typedef fiveints *p5i;          //some pointer that points to "fiveints" type
	
	p5i pointer = a;
 	printf("%d\n", pointer);
	
	
	for(int i = 0; i < 5; ++i) {
		printf("%d, ", a[i]);
	}
	
}
*/
