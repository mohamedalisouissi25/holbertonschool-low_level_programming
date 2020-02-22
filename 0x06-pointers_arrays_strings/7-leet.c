
#include "holberton.h"
/**
* *leet - encodes string
* @t: input
* Return: output
*/
char *leet(char *t)
{
int i, j;
char l[] = "aAeEoOtTlL";
char s[] = "4433007711";
	for (i = 0; t[i] != '\0'; i++)
{
	for (j = 0; l[j] != '\0'; j++)
		{
		if (t[i] == l[j])
		t[i] = s[j];
		}
}
	return (t);
}
