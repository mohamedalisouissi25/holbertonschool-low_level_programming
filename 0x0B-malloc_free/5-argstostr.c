#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenates the arguments
 * @ac: input
 * @av: input
 * Return: output
 */
char *argstostr(int ac, char **av)
{
int i, j, m = 0, n = 0;
char *d;

if (ac <= 0 || av == NULL)
	return (NULL);
for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	n++;
	n++;
	}
	n++;
d = malloc(n * sizeof(char));
if (d == NULL)
	return (NULL);
for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		d[m] = av[i][j];
		m++;
	}
	d[m] = '\n';
	m++;
	}
	d[m] = '\0';
return (d);
}
