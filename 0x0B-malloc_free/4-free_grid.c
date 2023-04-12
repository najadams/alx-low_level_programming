#include <stdlib.h>

/**
 * free_grid - does a lot
 * @grid : stores width
 * @height : stores heigt
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
