#include <stdio.h>

/**
 * _isupper- returns 0 if character is uppercase
 * and 1 if character is lower case
 * @c : this is the variable to store input
 * Return: 1 if input is capital and 0 else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
