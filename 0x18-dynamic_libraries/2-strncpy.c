#include <string.h>
/**
 * *_strncpy - this joins two srcings
 * @dest: stores the srcing to be added
 * @src: stores the beginning of the new srcing
 * @n: stores the number
 * Return: final string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = src[i];
	for ( ; i < n && src[i] != '\0'; i++)
		*(dest + i) = '\0';
	return (dest);
}
