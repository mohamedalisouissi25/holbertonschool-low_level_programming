#include "holberton.h"

/**
 * set_bit - sets value of bit to 1 at a given index
 * @n: input
 * @index: input
 * Return: output
 */

int set_bit(unsigned long int *n, unsigned int index)
{

if (index > sizeof(unsigned long int) * 8)
	return (-1);
*n += (1 << index);
	return (1);
}
