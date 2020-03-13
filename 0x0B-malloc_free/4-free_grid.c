#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a memory
 * @grid: input
 * @height: input
 * Return: void
 */
void free_grid(int **grid, int height)
{
int f;
if (grid == NULL || height <= 0)
	return;
for (f = 0; f < height; f++)
	free(grid[f]);
free(grid);
}
