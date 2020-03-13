#include "variadic_functions.h"
/**
 * print_numbers - prints the numbers
 * Description: prints numbers
 * @n: int
 * @separator: int
 * @sum: int
 * Return: output
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list list;
unsigned int i;
if (separator == NULL)
	separator = "";

va_start (list, n);
for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(list, int));
	if(i + 1 < n)
		printf("%s", separator);
	}
printf("\n");
va_end(list);
}
