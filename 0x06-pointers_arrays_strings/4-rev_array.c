#include <string.h>
/**
 * *_strcmp - this joins two srcings
 * @a: stores the beginning of the new srcing
 * @s2: stores the number
 * Return: returns the ascii difference
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (i = 0; i < n/2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - 0];
		a[n - 1] = temp;
	}
}
