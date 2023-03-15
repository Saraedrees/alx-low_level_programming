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
	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
		return (NULL);
	for (w = 0; w < width; w++)
	{
		grid[w] = malloc(sizeof(int) * height);/*why these loops*/
		if (grid[w] == NULL)
		{
			for (; w >= 0; w--)
				free(grid[w]);
			free(grid);
			return (NULL);
		}
	}
	for (w = 0; w < width; w++)
	{
		for (h = 0; h < height; h++)
			grid[w][h] = 0;
	}
	return (grid);
}
