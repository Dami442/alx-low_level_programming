#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2 dim grid
 * @grid: grid par
 * @height: height par
 * Return: 0 on success
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

