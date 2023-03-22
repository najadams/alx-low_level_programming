#include "main.h"
/**
 * print_sign - function to check alphabet
 *   @n - is the parameter which stores the character
 *   to be checked
 *
 * Return: 1 if the entered character is an alphabet and zero else 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

