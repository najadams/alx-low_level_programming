#include <stdio.h>

/**
 * _atoi - converts strings to integers
 * @s : store the address for the string
 * Return : number or zero on error
 */

int _atoi(char *s)
{
	int sign;
	int num;
	int i;

	sign = 1;
	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else if (num != 0)
		{
			break;
		}
	}

	return (num * sign);
}
