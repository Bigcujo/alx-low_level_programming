#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees two dimesional array
 * @grid: 2 dimentional grid
 * @height: height of the dimension of grid
 * Description: frees memory of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
