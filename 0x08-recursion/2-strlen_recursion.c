#include "holberton.h"
/**
 * _strlen_recursion - prints the lenght
 * @s: input
 * Return: output
 */

int _strlen_recursion(char *s)
	{
	int i = 0;

		if (*s == '\0')
		{
		return (0);
		}
		i++;
		return (i + _strlen_recursion(s + i));
	}
