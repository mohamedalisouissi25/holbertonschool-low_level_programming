#include "holberton.h"
/**
* _strspn - gets the lenght
*
* @s: input
* @a: input
* Return: output
*/
unsigned int _strspn(char *s, char *a)
{
unsigned int i, k;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; a[k] != '\0'; k++)
		{
		if (s[i] == a[k])
		break;
	}
	if (s[i] != a[k])
	break;
	}
return (i);
}
