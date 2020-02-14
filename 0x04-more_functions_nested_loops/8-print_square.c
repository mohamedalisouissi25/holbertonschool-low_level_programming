#include "holberton.h"
/**
* print_square - prints square
*
* @size: input
* Return: output
*/
void print_square(int size)
{
int n, m;
if (size > 0)
{
for (m = 1; m <= size; m++)
{
for (n = 1; n <= size; n++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
