#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* rev_string - prints string in reverse
* @s: stores the address of the pointer
*
* Return: always return length
*/
void rev_string(char *s)
{
	int len;
	int i;
	char temp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
