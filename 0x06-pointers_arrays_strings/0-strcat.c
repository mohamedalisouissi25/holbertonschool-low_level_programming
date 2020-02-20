#include "holberton.h"
/**
* _strcat - concatenates two strings
* @dest: input
* @src: input
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;

while (dest[i] != '\0')
{
i++;
}

for (j = 0; src[j] != '\0'; i++, j++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}
