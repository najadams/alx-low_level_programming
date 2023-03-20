#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* your code goes there */
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i);
		putchar(',');
	}
	putchar('9');
	putchar('\n');
	return (0);
}
