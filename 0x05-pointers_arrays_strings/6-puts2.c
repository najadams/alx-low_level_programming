#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* puts2 - prints other from strings
* @str: stores the address of the pointer
*
*/
void puts2(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 != 1)
		{
			putchar(*str + i);
		}
		else
		{
			continue;
			str++;
		}
	}
	putchar('\n');
}
