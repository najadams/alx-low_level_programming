#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints
 * @a : stores the address for the char
 * Return: returns the pointer to  first occurence
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
