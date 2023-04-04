#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - finds first occurence of a char
 * @a : stores the address for the char
 * @size : stores te string to be copied
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - i - 1);
	}
	printf("Sum of diagonal 1: %d\nSum of diagonal 2: %d\n", sum1, sum2);
}
