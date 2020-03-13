#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: output
 */
char *str_concat(char *s1, char *s2)
{
int i, j, k, m;
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
k = i + j + 1;
s = malloc(sizeof(char) * k);

if (s == NULL)
return (NULL);
	for (m = 0; m < i; m++)
	s[m] = s1[m];
	for (m = 0; m < j; m++)
	s[m + i] = s2[m];
	s[i + j] = '\0';

return (s);
}
