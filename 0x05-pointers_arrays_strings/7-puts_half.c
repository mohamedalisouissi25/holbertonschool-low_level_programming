#include "holberton.h"
/**
* puts_half - half of string
* @str: input
* Return: 0 or 1
*/
void puts_half(char *str)
{
int i = 0, k;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
for (k = i / 2; k < i; k++)
{
_putchar(str[k]);
}
}
else
{
for (k = (i + 1) / 2; k < i; k++)
{
_putchar(str[k]);
}
}
_putchar('\n');
}
