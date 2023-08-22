#include <string.h>
/**
 * *_strncat - this joins two srcings
 * @dest: stores the srcing to be added
 * @src: stores the beginning of the new srcing
 * @n: stores the number
 * Return: final string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	size_t dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
