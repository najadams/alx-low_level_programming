#include <stdio.h>
#include <stdlib.h>
/**
 * main - converts to cents
 * @argc: stores the num of input
 * @argv: stores the arguments
 * Return: returns 0 upon sucess
 */

int main(int argc, char *argv[])
{
	int cents, coins, i, num_denominations;
	int denominations[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;
	num_denominations = sizeof(denominations) / sizeof(denominations[0]);
	for (i = 0; i < num_denominations; i++)
	{
		coins += cents / denominations[i];
		cents %= denominations[i];
	}
	printf("%d\n", coins);
	return (0);
}
