#include "holberton.h"
/**
* *_memcpy - memory copy
*
* @dest: input
* @src: input
* @n: input
* Return: output
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;
	for (i = 0; i < n; i++)
	dest[i] = src[i];
return (dest);
}
