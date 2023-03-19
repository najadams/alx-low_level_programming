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
	int ch = 1; 

	while (ch <= 9)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
