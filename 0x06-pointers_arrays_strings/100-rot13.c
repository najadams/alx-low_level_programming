#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *rot13(char *str)
{
	char *result;
	int i, j;

	result = (char *)malloc(strlen(str) + 1);
	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			result[j] = ((str[i] - 'a') + 13) % 26 + 'a';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			result[j] = ((str[i] - 'A') + 13) % 26 + 'A';
		}
		else
		{
			result[j] = str[i];
		}
	}
	result[j] = '\0';
	return result;
}
