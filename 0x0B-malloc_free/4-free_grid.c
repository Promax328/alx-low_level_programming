#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created (alloc_grid)
 * @grind: pointer to int holding address of array
 * @height: size of row (int)
 *
 * Return: void
 */

void fre_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);

		free(grid);
	}
}
