#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @height: height input
 * @width: width input
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;


		if (width <= 0 || height <= 0)
			return (NULL);

	grid = malloc(height * sizeof(int *));
		if (grid == NULL)
			return (NULL);

		for (; i < height; i++)
		{
		
			grid[i] = malloc(width * sizeof(int));
			if (grid[i] == NULL)
			{

			while (i >= 0)
			{
				free(grid[i--]);
			}
			free(grid);
			return (NULL);
			}
			for (; j < width; j++)

				grid[i][j] = 0;
		}
		return (grid);
}
