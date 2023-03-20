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
	char c;

	for (i = 0; i < 10; i++)
	{
		c = i + '0';
		putchar(c);
	}
	for (i = 10; i < 16; i++)
	{
		c = i - 10 + 'a';
		putchar(c);
	}
	putchar('\n');
	return (0);
}
