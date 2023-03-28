#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* print_array - prints half end of the string
* @a: stores the address of the pointer
* @n: stores the number 
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
