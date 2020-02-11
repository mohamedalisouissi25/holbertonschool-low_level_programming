#include "holberton.h"
/**
 * print_alphabet_x10 - print 10 times.
 * Return: 0.
 */
void print_alphabet_x10(void)
{
int t;
char Al;
for (t = 0; t < 10; t++)
{
for (Al = 'a'; Al <= 'z'; Al++)
{
_putchar(Al);
}
_putchar('\n');
}
}

