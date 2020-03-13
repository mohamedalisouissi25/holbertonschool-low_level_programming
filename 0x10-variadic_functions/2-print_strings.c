#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * Description: prints string
 * @n: input
 * @separator: input
 * Return: output
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

va_list list;
unsigned int i;
char *dali;
if (separator == NULL)
	separator = "";

va_start(list, n);
for (i = 0; i < n; i++)
	{
	dali = va_arg(list, char*);
	if (dali == NULL)
	printf("(nil)");
	else
	printf("%s", dali);
	if (i + 1 < n)
	printf("%s", separator);
	}
printf("\n");

va_end(list);
}
