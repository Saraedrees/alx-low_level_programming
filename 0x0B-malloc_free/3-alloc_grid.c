#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function returns a pointer to a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: (Success) a pointer to the 2D array
 * or NULL on failure, or if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int w = 0, h = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);/*why these loops*/
		if (grid[h] == NULL)
		{
			for (; h >= 0; h--)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}
