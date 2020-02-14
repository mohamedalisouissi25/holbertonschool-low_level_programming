#include "holberton.h"
/**
 *print_triangle - prints a triangle
 *@size: intput*
 *Return: output
*/
void print_triangle(int size)
{
int n, m;
if (size > 0)
{
for (n = 1; n <= size; n++)
{
for (m = size; m >= 1; m--)
{
if (n < m)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
else
_putchar('\n');
}
