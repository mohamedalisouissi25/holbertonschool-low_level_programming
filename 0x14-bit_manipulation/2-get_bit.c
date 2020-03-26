#include "holberton.h"

/**
 * get_bit - returns the value of a bit
 * @n: input
 * @index: input
 * Return: output
 */

int get_bit(unsigned long int n, unsigned int index)

{

if (index > sizeof(unsigned long int) * 8)
	return (-1);

if (n & (1 << index))
	return (1);

return (0);

}
