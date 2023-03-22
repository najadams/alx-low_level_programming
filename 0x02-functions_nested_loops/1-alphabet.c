#include "main.h"

/**
 * print_alphabet - prints all the alphabets
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
