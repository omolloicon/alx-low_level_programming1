#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory.
 * @grid: array.
 * @height: height.
 *
 * Return: null
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
