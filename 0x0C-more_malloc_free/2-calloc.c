#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - memory allocation
 * @nmemb: input
 * @size: input
 * Return: output
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *m;
unsigned int i;
if (nmemb == 0 || size == 0)
	return (NULL);
m = malloc(nmemb * size);

if (p == NULL)
	return (NULL);

for (i = 0; i < (nmemb * size); i++)
	m[i] = 0;

return (m);
}
