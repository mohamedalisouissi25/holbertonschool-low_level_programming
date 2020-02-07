#include <stdio.h>

/**
 * main - numbers from 00
 *
 * Return: 0
 */
int main(void)
{
	int Al, Al2;

	for (Al = 0; Al <= 9; Al++)
		for (Al2 = 0; Al2 <= 9; Al2++)
	{
		putchar(Al + '0');
		putchar(Al2 + '0');
		if ((Al != 9) || (Al2 != 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

