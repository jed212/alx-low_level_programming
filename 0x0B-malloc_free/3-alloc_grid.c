#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width
 * @length: length
 *
 * Return: If width or height is 0 or negative, return NULL,
 * NULL on failure
 */
int **alloc_grid(int width, int length)
{
	int **grid;
	int i;
	int j;


	if (width <= 0 || length <= 0)
		return (NULL);

	grid = (int **)malloc(length * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);

}
