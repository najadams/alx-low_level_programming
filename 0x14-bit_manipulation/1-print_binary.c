#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int shift = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	while (shift >= 0)
	{
		if ((n >> shift) & mask)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
		{
			_putchar('0');
		}
		shift--;
	}
	if (!flag)
		_putchar('0');
}
