#include "variadic_functions.h"
/**
 * sum_them_all - sum the numbers
 * Description: sum of numbers
 * @n: int
 * @sum: int
 * Return: output
 */

int sum_them_all(const unsigned int n, ...)

{
va_list list;
unsigned int i;
int summ = 0;

	if (n == 0)
	return (0);

va_start(list, n);
	for (i = 0 ; i < n ; i++)
	summ += va_arg(list, int);

va_end(list);
	return (summ);
}
