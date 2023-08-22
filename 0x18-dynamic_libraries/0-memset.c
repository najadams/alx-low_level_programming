#include "main.h"
#include <stdio.h>
/**
 * _memset - fills the array pointer with the same char
 * @s : stores the address for the first pointer
 * @b : is the charcter for filling space
 * @n : is the number of spaces to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
