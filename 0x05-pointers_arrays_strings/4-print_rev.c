#include "main.h"
#include <stdio.h>

/**
* print_rev - prints string in reverse
* @s: stores the address of the pointer
*
* Return: always return length
*/
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
