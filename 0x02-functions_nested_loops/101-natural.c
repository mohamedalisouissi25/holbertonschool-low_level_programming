#include <stdio.h>

/**
 *main - prints sum
 *Return: output
 */
int main(void)
{

int i;
long int s;

	for (i = 0; i <= 1024; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	{
	s = s + i;
	}
}

printf("%d\n", s);

return (0);
}
