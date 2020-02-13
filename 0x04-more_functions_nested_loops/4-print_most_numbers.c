#include "holberton.h"
/**
 * print_most_numbers - print num from 0 to 9 except for 2 and 4
 *
 * Return: prints output
 */
void print_most_numbers(void)
{
int Al;
for (Al = '0'; Al <= '9'; Al++)
{
if (Al != 2 && Al != 4)
_putchar(Al);
}
_putchar('\n');
}
