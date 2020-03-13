#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints sums
 * @a: input
 * @size: input
 * Return: output
 */
void print_diagsums(int *a, int size)
{
int i, j, s, n = 0, m = 0;

for (i = 0; i < size; i++)
	{
	s = (i * size) + i;
	n += *(a + s);
	}

for (j = 0; j < size; j++)
	{
	s = (j * size) + (size - 1 - j);
	m += *(a + s);
	}

printf("%i, %i\n", n, m);
}
