#include "holberton.h"
/**
 * rot13 - encodes rot13
 * @s: input
 * Return: output
 */
char *rot13(char *d)
{
int i, j;

char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; *(d + i); i++)
	{
	for (j = 0; j < 52; j++)
		{
		if (a[j] == *(d + i))
			{
			*(d + i) = b[j];
			break;
			}
		}
	}
return (d);
}
