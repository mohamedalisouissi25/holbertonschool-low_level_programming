#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate
 * @s1: input
 * @s2: input
 * @n: input
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, d;
char *s;

if (s1 == NULL)
	i = 0;

else
	{
	for (i = 0; s1[i]; i++)
	;
	}

if (s2 == NULL)
j = 0;

else
	{
	for (j = 0; s2[j]; j++)
	;
	}

if (j > n)
	j = n;

s = malloc(sizeof(char) * (i + j + 1));

if (s == NULL)
	return (NULL);

for (d = 0; d < i; d++)
	s[d] = s1[d];

for (d = 0; d < j; d++)
	s[d + i] = s2[d];
	s[i + j] = '\0';

return (s);
}
