#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>

//void first_word(char *input_string, char **output_word)
int first_word(char *input_string)
 {
    //using stddiff
	char *p = input_string; 
 
    
	while( *p != ' ') {
		p++;
	}
	
	ptrdiff_t size = p-input_string;
	
	char *output_word = (char *)malloc(size*sizeof(char));
	
	assert(output_word != NULL);         //crashes if false
	
	for(unsigned i = 0; i < size; ++i) {
		*output_word = *input_string;
		output_word++;
		input_string++;
	}
	
	output_word -= size;
	printf("%s, ", output_word);    //CNR: question 4
	printf("%d\n", size);

	free(output_word);
	return 0; 
}


int main() {
    
    char str[12] = "Vadim Durnov";
    char *input_string;
    input_string = &str;
    
    //char **output_word;
    
	//first_word(input_string, output_word);
	first_word(input_string); 
} 

/*
Problems & Questions:
1. I cannot realize why in field of arguments the pointer to a pointer is given.  
     -> deleted it.
   
2. why printf("%s, ", *output_word); causes "segmentation fault" 
     -> Where I derefrence the NULL pointer?

3. Line27: why it works if output_word stors address that points to the first char

4. Why if free(output_word); is not called, there is still no leaks? 
     -> checked with valgrind --leak-check.....
*/  
