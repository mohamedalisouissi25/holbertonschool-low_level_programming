#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - arrays
 * @min: input
 * @max: input
 * Return: output
 */
int *array_range(int min, int max)
{
int i, j;
int *s;

if (min > max)
	return (NULL);
j = max - min + 1;
s = malloc(sizeof(int) * j);

if (s == NULL)
	return (NULL);

for (i = 0; i < j; i++, min++)
	{
	s[i] = min;
	}

return (s);
}
