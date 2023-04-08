#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc : stores the number of terminal entry
 * @argv : stores the strings of input
 * Return: Always return 0
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
