#include "holberton.h"

/**
 * print_diagonal - draws a diagonal
 * @n : input
 * Return: output
 */
void print_diagonal(int n)
{
int l, m;
if (n > 0)
{
for (l = 0; l < n; l++)
{
for (m = 0; m < l; m++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
_putchar('\n');
}
