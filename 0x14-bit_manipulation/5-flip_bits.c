#include "holberton.h"

/**
 * flip_bits - returns the number of bits
 *@n: input
 * @m: input
 * Return: output
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

unsigned long int bin;
unsigned long int flip;
int i = 0;

flip = ~0;
flip = flip >> 1;
flip = ~flip;

bin = n ^ m;

while (flip > 0)
{
	if (bin & flip)
	i++;
	flip = flip >> 1;
}

return (i);

}
