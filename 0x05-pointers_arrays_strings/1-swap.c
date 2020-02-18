#include "holberton.h"
/**
 *swap_int - swaps values
 *@a: input
 *@b:input
 * Return: output.
 */
void swap_int(int *a, int *b)

{
int c = *a;
*a = *b;
*b = c;
}
