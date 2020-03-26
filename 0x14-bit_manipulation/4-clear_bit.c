#include "holberton.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: input
 * @index: input
 * Return: output
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

unsigned int bin;

if (index > sizeof(unsigned long int) * 8)
	return (-1);

bin = 1 << index;
*n = *n & (~bin);

	return (1);
}
