#include <stdio.h>

/**
* _strlen - count the length of a string
* @s: stores the address of the pointer
*
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
