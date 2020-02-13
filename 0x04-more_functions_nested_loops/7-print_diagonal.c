#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n : input
 * Return: output
 */
void print_diagonal(int n)
{
int l, m;
for (l = 0; l < n; l++)
{
for (m = 0; m < l; m++)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
