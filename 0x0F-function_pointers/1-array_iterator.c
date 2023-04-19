#include <stdio.h>

/**
 * array_iterator - uses callback functions to print
 * @array: stores the array
 * @size : stores the size of the array
 * @action: this is the pointer function for the callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
