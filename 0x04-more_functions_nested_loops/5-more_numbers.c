#include "holberton.h"
/**
* more_numbers - prints 10 times 0 to 14
*
* Return: output
*/

void more_numbers(void)
{
int t, n;
for (t = 0; t < 10; t++)
{
for (n = 0 ; n <= 14 ; n++)
{
if (n > 9)
{
_putchar(n / 10 + '0');
}
_putchar(n % 10 + '0');
}
_putchar('\n');
}
}
