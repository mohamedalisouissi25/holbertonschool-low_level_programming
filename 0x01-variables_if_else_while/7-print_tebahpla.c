#include <stdio.h>

/**
 * main - lowercase alphabet in reverse order
 *
 * Return: 0
 */
int main(void)
{
	char Al;

	for (Al = 'z'; Al >= 'a'; Al--)
		putchar(Al);
	putchar('\n');

	return (0);
}
