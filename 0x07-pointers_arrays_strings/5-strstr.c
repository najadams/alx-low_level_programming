#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strstr - finds first occurence of a char
 * @haystack : stores the address for the char
 * @needle : stores te string to be copied
 * Return: returns the pointer to  first occurence
 */

char *_strstr(char *haystack, char *needle)
{
	size_t needle_len = strlen(needle);

	if (needle_len == 0)
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (strncmp(haystack, needle, needle_len) == 0)
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
