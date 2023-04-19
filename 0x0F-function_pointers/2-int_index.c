#include <stdio.h>
/**
 * int_index - calls other function to compare
 * @array: stores the array of numbers
 * @size: stores the size of array
 * @cmp : stores the callback function
 * Return: return index on succes
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
