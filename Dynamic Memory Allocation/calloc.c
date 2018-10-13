/* This program simply reads integers 
   into a dynamic array until eof.
   The array is expanded as needed */

#include <stdio.h>
#include <stdlib.h>

// Initial array size
#define INIT_SIZE 8

int main(int argc, char *argv[]) 
{
  int num;     // Num. of integers
  int *arr;    // Array of ints.
  size_t sz;   // Array size
  int m, in;   // Index & input num
  
  // Allocate the initial space.
  sz = INIT_SIZE;
  arr = (int *)calloc(sz, sizeof(int));
  if (arr == NULL) {
    fprintf(stderr, "realloc failed.\n");
    exit(1);
  }    
  // Read in the numbers.
  num = 0;
  while(scanf("%d", &in) == 1) {
    // See if there's room.
    if(num >= sz) {
      // There's not.  Get more.
      sz *= 2;
      arr = (int *)realloc(arr, sz*sizeof(int));
      if(arr == NULL) {
        fprintf(stderr, "realloc failed.\n");
        exit(1);
      }
    }
    // Store the number.
    arr[num++] = in;
  }
  // Print out the numbers
  for(m = 0; m < num; ++m) {
    printf("%d\n", arr[m]);
  }
  free(arr); // Always good to free
  return 0;
}
