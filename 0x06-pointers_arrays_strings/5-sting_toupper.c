#include "holberton.h"
/**
* *string_toupper - changes low to up
* @x: input
* Return: output
*/
char *string_toupper(char *x)
{
int i;
for (i = 0; x[i] != '\0'; i++)
{
if (x[i] >= 'a' && x[i] <= 'z')
x[i] = x[i] - 32;
}
return (x);
}
