#include <stdio.h>

/**
* swap_int - updates the value using pointer
* @a: stores the address of the pointer
* @b: stores the address of the pointer
*
*/
void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
