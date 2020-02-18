#include "holberton.h"
/**
 *rev_string - string in reverse
 *@s: input
 * Return: output.
 */
void rev_string(char *s)

{
char k;
int j = 0;
int i = 0;
int l;
while (s[i] != '\0')
{
i++;
}
i--;
l = i;
for (; i > l / 2; i--)
{
k = s[i];
s[i] = s[j];
s[j] = k;
j++;
}
}
