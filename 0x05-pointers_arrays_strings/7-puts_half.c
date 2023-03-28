#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* puts_half - prints half end of the string
* @str: stores the address of the pointer
*
*/
void puts_half(char *str)
{
	int len = strlen(str);
	int start = len / 2;
	int i;

	if (len % 2 == 1)
	{
		start = (len - 1) / 2;
	}
	for (i = start; i < len; i++)
	{
		putchar(*(str + i));
	}

	putchar('\n');
}
