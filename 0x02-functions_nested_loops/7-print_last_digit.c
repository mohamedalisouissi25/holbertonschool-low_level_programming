#include "holberton.h"
/**
 * print_last_digit - computes the absolute value
 * @n: input
 * Return: last digit
 */
int print_last_digit(int n)
{
int l = n % 10;
if (l >= 0)
{
_putchar(l + '0');
return (l);
}
else
{
_putchar(l * -1 + '0');
return (l * -1);
}
}
