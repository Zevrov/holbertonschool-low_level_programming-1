#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - create 2 dimensional grid
 *
 * @width: input integer of width
 *
 * @height: input integer of height
 *
 * Return: grid or Null
 */
int **alloc_grid(int width, int height)
{
	int **grid, c, x, y;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (c = 0; c < height; c++)
	{
		grid[c] = malloc(sizeof(int) * width);
		if (grid[c] == NULL)
		{
			while (c >= 0)
			{
				free(grid[c]);
				c--;
			}
			free(grid);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
		for (x = 0; x < width; x++)
			grid[y][x] = 0;
	return (grid);
}
