#include <stdio.h>
#include <stdlib.h>

/**
* create_array - create array
*
* @size: input
* @c: input
* Return: output
*/
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *s;

if (size == 0)
	return (NULL);
	s = malloc(size * sizeof(c));

if (s == NULL)
	return (NULL);

while (i < size)
	{
	s[i] = c;
	i++;
	}

return (s);
}
