#include "holberton.h"
/**
 * _strchr - locates a string
 * @s: input
 * @c: input
 * Return: output
 */

char *_strchr(char *s, char c)
{
int i = 0;
	while (*(s + i))
	{
	if (*(s + i) == c)
	return (s + i);
	i++;
	}
	if (*(s + i) == c)
	return (s + i);
	return (0);
}
