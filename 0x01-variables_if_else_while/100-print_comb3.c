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
	int a = 0;
	int j = 0;

	for (a = 0; a < 9; a++)
	{
		for (j = 1; j < 10; j++)
		{
			putchar(a + '0');
			putchar(j + '0');
			if (a < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	printf("\n");
	return (0);
}
