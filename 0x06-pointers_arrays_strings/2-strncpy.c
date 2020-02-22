#include "holberton.h"
/**
* *_strncpy - concatenates
*
* @dest: input
* @src: input
* @n: input
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
for (i = 0; src[i] != '\0'; i++)
{
}
j = 0;
while (src[j] != '\0' && j < n)
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
