#include "holberton.h"
/**
 *_strlen - lenght of string
 *@s: input
 * Return: output.
 */
int _strlen(char *s)
{
int i = 0;
int count = 0;
while (s[i] != '\0')
{
count++;
i++;
}
return (count);
}
