#include <stdio.h>

/**
* _puts- updates the value using pointer
* @str: stores the address of the pointer
*
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
