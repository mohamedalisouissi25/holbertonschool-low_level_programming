#include "holberton.h"
/**
 * times_table - 9 times table
 * Return: 9 times table
 */
void times_table(void)
{

int n;
int m;
int somme;

for (n = 0; n < 10; n++)
{
for (m = 0; m < 10; m++)
{
somme = n * m;
if (somme < 10)
{
if (m > 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(somme + '0');
}
else
{
_putchar(' ');
_putchar((somme / 10) + '0');
_putchar((somme % 10) + '0');
}
if (m < 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
