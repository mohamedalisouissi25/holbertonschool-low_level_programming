#include "variadic_functions.h"
/**
 * print_all - print all
 * @format: input
 * Return: output
 */
void print_all(const char * const format, ...)
{

va_list list;

int i;
int s;

va_start(list, format);

for (i = 0 ; format[i] != '\0' ; i++)
	{
	s = 1;

	switch (format[i])
	{
		case 'c':
		printf("%c", va_arg(list, int));
		break;

		case 'i':
		printf("%i", va_arg(list, int));
		break;

		case 'f':
		printf("%f", va_arg(list, double));
		break;

		case 's':
		printf("%s", va_arg(list, char*));
		break;

		default:
		s = 0;
	}

	if (s == 1 && format[i + 1] != '\0')
	printf(", ");
	}
printf("\n");

va_end(list);
}
