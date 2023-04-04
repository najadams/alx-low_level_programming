#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - finds first occurence of a char
 * @s : stores the address for the char
 * @accept : stores te string to be copied
 * Return: returns the pointer to  first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
