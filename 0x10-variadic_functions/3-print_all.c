#include "variadic_functions.h"
/**
 * print_all - print all
 * @format: input
 * Return: output
 */
void print_all(const char * const format, ...)
{

va_list list;

int i = 0;
int d;
char *ch;

va_start(list, format);

while (format && format[i])

	{
	d = 1;
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
		ch = va_arg(list, char*);
			if (ch == NULL)
			ch = "(nil)";
			printf("%s", ch);
		break;
		default:
		d = 0;
		}
	if (d == 1 && format[i + 1] != '\0')
	printf(", ");
	i++;
	}
printf("\n");

va_end(list);
}
