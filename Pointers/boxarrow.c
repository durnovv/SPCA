#include <stdio.h>
git 
int main(int argc, char **argv) {
  int x = 1;
  int arr[3] = {2, 3, 4};
  int *p = &arr[1];

  printf("&x: %p;  x: %d\n", &x, x);
  printf("&arr[0]: %p;  arr[0]: %d\n", &arr[0], arr[0]);
  printf("&arr[2]: %p;  arr[2]: %d\n", &arr[2], arr[2]);    
  printf("&p: %p; p: %p; *p: %d\n", &p, p, *p);           	//*p points to the address where value to print is stored

	  return 0;
}
