#include <stdio.h>

/**
 * _isdigit- returns 0 if character is uppercase
 * and 1 if character is lower case
 * @c : this is the variable to store input
 * Return: 1 if input is capital and 0 else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
