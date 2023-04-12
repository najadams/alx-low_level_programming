#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size : stores the size of the created arrays
 * @c : stores the char to be inserted in array
 * Return: return null upon failure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
