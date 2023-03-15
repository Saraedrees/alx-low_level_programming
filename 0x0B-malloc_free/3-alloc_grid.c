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
	int **ptr;

	if (w <= 0 || h <= 0)
		return (NULL);
	ptr = malloc(sizeof(int) * width);
	for (w = 0; w < width; w++)
	{
		for (h = 0; h < height; h++)
		{
			if (ptr == NULL)
				return (NULL);
		}
	}
	return (ptr);
}
