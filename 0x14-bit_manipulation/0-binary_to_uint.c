#include "holberton.h"

/**
 * binary_to_uint - converts a binary number
 * @b: input
 * Return: output
 */

unsigned int binary_to_uint(const char *b)

{
int i;
unsigned int bin;

bin = 0;
if (!b)
	return (0);

for (i = 0; b[i] != '\0'; i++)
{
	if (b[i] != '0' && b[i] != '1')
		return (0);
}

for (i = 0; b[i] != '\0'; i++)
{
	bin <<= 1;
	if (b[i] == '1')
		bin += 1;
}

return (bin);
}
