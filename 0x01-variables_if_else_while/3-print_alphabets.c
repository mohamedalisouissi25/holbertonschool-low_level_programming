#include <stdio.h>

/**
 * main - lowercase and uppercase alphabet
 *
 * Return: 0
 */
int main(void)
{
	char Al;

	for (Al = 'a'; Al <= 'z'; Al++)
		putchar(Al);
	for (Al = 'A'; Al <= 'Z'; Al++)
		putchar(Al);
	putchar('\n');

	return (0);
}
