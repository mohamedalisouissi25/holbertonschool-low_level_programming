#include "holberton.h"
/**
 * print_numbers - print num from 0 to 9
 *
 * Return: prints output
 */
void print_numbers(void)

{
int N;
for (N = 0; N < 10; N++)
{
	_putchar(N + '0');
}
	_putchar('\n');
}
