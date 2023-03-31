#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function frees a 2D grid created by "alloc_grid" function
 * @grid: grid previously created by "alloc_grid" function
 * @height: height of the grid
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
