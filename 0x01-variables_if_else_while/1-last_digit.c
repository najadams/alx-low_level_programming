#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	printf("Last digit of ");
	if (last > 5)
	{
		printf("%d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("%d is %d and is 0\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("%d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
