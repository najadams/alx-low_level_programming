#include <stdlib.h>
#include <string.h>

/**
 * str_concat - joining two strings
 * @s1 : stores address
 * @s2 : stores address
 * Return: return null on error
 */

char *str_concat(char *s1, char *s2)
{
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);
	char *concatenated = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}



	if (concatenated == NULL)
	{
		return (NULL);
	}

	strcpy(concatenated, s1);

	strcpy(concatenated + s1_len, s2);

	return (concatenated);
}
