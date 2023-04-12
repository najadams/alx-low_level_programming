#include <stdlib.h>
#include <string.h>

/**
 * _strdup - pasting a string
 * @str : stores the first address for the string
 * Return: returns the copy
 */

char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *dup = (char *) malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}


	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);
	return (dup);
}
