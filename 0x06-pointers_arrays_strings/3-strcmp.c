#include "holberton.h"
/**
* _strcmp - compare two strings
* @s1: input
* @s2: input
* Return: dest
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
if (s1[i] == '\0')
{
return (0);
}
else
{
return (s1[i] - s2[i]);
}
}
