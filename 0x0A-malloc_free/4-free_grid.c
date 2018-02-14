#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free all 2 dimensional grid
 *
 * @grid: input matrix
 *
 * @height: input integer height
 */
void free_grid(int **grid, int height)
{
	int c = 0;

	if (grid == NULL)
		free(grid);
	while (c < height)
	{
		free(grid[c]);
		c++;
	}
	free(grid);
}
