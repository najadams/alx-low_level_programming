#include <stdio.h>
/**
 * *_strcpy- returns dest
 * @dest: stores address
 * @src: stores address
 * Return: returns a copy
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}