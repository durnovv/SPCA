#include "bst.h"


#include <stdio.h>


extern void insert(tree *t, int value) {
	
	int size = t->size;
	node *toInsert; 
	toInsert->value = value;
	toInsert->leftchild = NULL;
	toInsert->rightchild = NULL;
		
	if(size == 0) {
		t->root = toInsert; 
		t->size++; 
	} else {
		
		node current = t->root;
		 
		for(int i = 0; i < size; ++i) {
			
		    if(current.value < value) {
		    	if(current.rightchild != NULL) {
		    		current = current.rightchild; 
		    	}
		    	else {
		    		current.rightchild = toInsert;
		    		t->size++; 
		    		break;  	
		    	}
		    } else if(current.value > value) {
		    	if(current.leftchild != NULL) {
		    		current = current.leftchild; 
		    	}
		    	else {
		    		current.leftchild = toInsert;
		    		t->size++; 
		    		break;  	
		    	}
		    } else {
		    	printf("The value has been already inserted"); 
		    }
		}
		
		
	}
}





extern int lookup(tree *t, int value) {
	
}


