#include <stdlib.h>

/**
 * alloc_grid - creates a two d array
 * @width : stores number of elements in a row
 * @height : stores number of columns
 * Return: return the address for array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

