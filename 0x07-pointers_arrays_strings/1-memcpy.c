#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies one string to another address
 * @dest : stores the address for the first pointer
 * @src : stores te string to be copied
 * @n : is the number of spaces to be filled
 * Return: returns the pointer to new area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
