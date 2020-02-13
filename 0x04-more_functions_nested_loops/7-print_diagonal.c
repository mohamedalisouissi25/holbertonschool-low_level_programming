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
	for (m = 0; m < n; m++)
{
	if (m != 0)
{
	l = 0;
	while (l < m)
{
	_putchar(' ');
	l++;
}
}
	_putchar('\\');
	_putchar('\n');
}
}
	else
{
	_putchar('\n');
}
}
