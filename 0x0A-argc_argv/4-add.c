#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - prints the name of the program
 * @argc : stores the number of terminal entry
 * @argv : stores the strings of input
 * Return: Always return 0
 */

int main(int argc, char *argv[])
{
	int i, num, sum = 0;
	bool hasError = false;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			hasError = true;
			break;
		}
		sum += num;
	}
	if (hasError)
	{
		return (1);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
}
