#include <stdio.h>

/**
 * main - possible combinations
 *
 * Return: 0
 */
int main(void)
{
	int Al;

	for (Al = 0; Al <= 9; Al++)
	{
		putchar(Al + '0');
		if (Al != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

