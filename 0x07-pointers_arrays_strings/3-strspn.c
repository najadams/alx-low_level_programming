#include <stdio.h>
/**
 * _strspn - returns the number of chars
 * @s: stores the address
 * @accept: stores the other address
 * Return : returns the count number
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	while (*s != '\0')
	{
		char *p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				count++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			break;
		}
		s++;
	}
	return count;
}
