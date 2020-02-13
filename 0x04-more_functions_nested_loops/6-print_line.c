#include "holberton.h"
/**
* print_line - print line
* @n: input
* Return: output
*/
void print_line(int n)
{
int Al;
if (n >= 0)
{
for (Al = 0; Al < n; Al++)
{
_putchar('_');
}
}
_putchar('\n');
}
