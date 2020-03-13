#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - allocation
 * @width: input
 * @height: input
 * Return: output
 */
int **alloc_grid(int width, int height)
{
int i;
int j;
int **d;

if (width <= 0 || height <= 0)
	return ('\0');

d = malloc(height * sizeof(int *));
if (d == NULL)
	return (NULL);
for (i = 0 ; i < height ; i++)
	{
	d[i] = malloc(width * sizeof(int));
	if (d[i] == NULL)
	{
		for (i = i - 1 ; i >= 0 ; i--)
		{
		free(d[i]);
		}
		free(d);
		return (NULL);
	}
	}

for (i = 0 ; i < height ; i++)
	for (j = 0 ; j < width ; j++)
	d[i][j] = 0;

return (d);
}
