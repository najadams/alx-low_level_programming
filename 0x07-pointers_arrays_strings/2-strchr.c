#include "main.h"
#include <stdio.h>
/**
 * _strchr - finds first occurence of a char
 * @s : stores the address for the char
 * @c : stores te string to be copied
 * Return: returns the pointer to  first occurence
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
