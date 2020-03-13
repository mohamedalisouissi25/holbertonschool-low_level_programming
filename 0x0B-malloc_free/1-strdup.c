#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strdup - returns a pointer
* @str: intput
* Return: output
 */
char *_strdup(char *str)
{
int ln = 0;
int i;
char *d;
	if (str == '\0')
		{
		return ('\0');
		}
	for (i = 0 ; str[i] != '\0' ; i++)
		{
		ln++;
		}
		d = malloc(sizeof(char) * ln + 1);
	if (d == '\0')
		{
		return ('\0');
		}
	else
		{
		for (i = 0 ; str[i] != '\0' ; i++)
		{
		d[i] = str[i];
		}
		}
		d[i] = '\0';
		return (d);
}
