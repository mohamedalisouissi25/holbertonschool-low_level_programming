#include "holberton.h"

/**
 * get_endianness - checks the endianness
 * Return: output
 */

int get_endianness(void)

{
int i;
char *j;

i = 1;
j = (char *)&i;

return (*j);
}
