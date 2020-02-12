#include "holberton.h"
/**
 * print_sign - prints the sign of number
 * @n: input
 * Return: 1 if greater than 0 and 0 if zero and -1 if less
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
