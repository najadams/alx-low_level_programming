#include <ctype.h>

/**
 * cap_string - capitalizes the first letter of each word in a string
 * @str: the string to modify
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;
	char *ptr = str;

	if (*ptr != '\0')
	{
		for (i = 0; ptr[i] != '\0'; i++)
		{
			if ((i == 0 || ptr[i - 1] == ' ' || ptr[i - 1] == '.'
			|| ptr[i - 1] == '\n' || ptr[i - 1] == '\t')
			&& islower(ptr[i]))
				ptr[i] = toupper(ptr[i]);
		}
	}

	return (ptr);
}
