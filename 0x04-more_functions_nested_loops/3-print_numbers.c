#include <stdio.h>
#include "main.h"

/**
 * print_numbers- return the product of two numbers
 * @a : this is the variable to store input
 * Return: the value of the product
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
