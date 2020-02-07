#include <stdio.h>

/**
 * main - lowercase except for q and e
 *
 * Return: 0
 */
int main(void)
{
	char Al;

	for (Al = 'a'; Al <= 'z'; Al++)
	{
		if (Al == 'e' || Al == 'q')
			Al++;
		putchar(Al);
	}
	putchar('\n');
	return (0);
}
