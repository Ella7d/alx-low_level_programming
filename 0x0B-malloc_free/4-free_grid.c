#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memory allocated previously
 * @grid: grid to free
 * @height: height of grid
 * Return: NULL on failure
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0 || height <= 0)
	
	{
	return;
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
			free(grid);
	}
}
