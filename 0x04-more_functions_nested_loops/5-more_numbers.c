#include "holberton.h"
/**
* more_numbers - prints 10 times 0 to 14
*
* Return: output
*/
void more_numbers(void)
{
int k, l;
for (k = 0 ; k <= 10 ; k++)
{
for (l = 1 ; l <= 14 ; l++)

if (l >= 10)
{
_putchar (l / 10 + '0');
_putchar (l % 10 + '0');
}
else
_putchar (l + '0');
_putchar ('\n');
}
}
