#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc : stores the number of terminal entry
 * @argv : stores the strings of input
 * Return: Always return 0
 */

int main(int argc, char *argv[])
{
	int ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		ans = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", ans);
		return (0);
	}
}
