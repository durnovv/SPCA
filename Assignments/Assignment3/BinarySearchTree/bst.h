#include <stdio.h>

typedef struct node_st {
	int value;
	struct node_st *leftchild;
	struct node_st *rightchild;
} node;

typedef struct tree_st {
	int size;
	node *root; 
	node *nodes;
} tree;  

extern void insert(tree *t, int value);


extern int lookup(tree *t, int value);

