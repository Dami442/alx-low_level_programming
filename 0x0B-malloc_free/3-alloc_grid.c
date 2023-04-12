#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dim array of int
 * @width: par 1
 * @height: par 2
 * Return: Null and grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{		/* Free previously allocated memory */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
		free(grid);
		return (NULL);
		}
	}

	return (grid);
}

