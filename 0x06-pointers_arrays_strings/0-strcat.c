#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest : stores address of string
 * @src : stores address of string
 * Return: Always returns the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src)
	{
		*dest = *dest + *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
