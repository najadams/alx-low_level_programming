#include "main.h"

/**
 * _islower(int c) tells if a character is lower
 *
 * Return: Always 0.
 */
int  _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
