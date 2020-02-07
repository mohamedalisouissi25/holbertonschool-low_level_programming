#include <stdio.h>

/**
 * main - single digit numbers base 16 lowercase
 *
 * Return: 0
 */
int main(void)
{
	int Al;

	for (Al = '0'; Al <= '9'; Al++)
		putchar(Al);
	for (Al = 'a'; Al <= 'f'; Al++)
		putchar(Al);
	putchar('\n');

	return (0);
}
