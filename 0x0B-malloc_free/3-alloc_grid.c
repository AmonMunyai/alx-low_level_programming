#include "main.h"

/**
 * alloc_grid - returns a pointer to 2 dimensional
 * array of integers
 * @width: number cols
 * @height: number of rows
 * Return: pointer to 2D array, NULL otherwise
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int rows, cols;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (rows = 0; rows < height; rows++)
	{
		grid[rows] = malloc(sizeof(int) * width);

		if (grid[rows] == NULL)
		{
			for (rows = 0; rows < height; rows++)
				free(grid[rows]);
			free(grid);
			return (NULL);
		}

		for (cols = 0; cols < width; cols++)
			grid[rows][cols] = 0;
	}
	return (grid);
}
