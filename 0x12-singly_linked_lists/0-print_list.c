#include "lists.h"

/**
 * print_list - print list
 * @h: input
 * Return: output
 */
size_t print_list(const list_t *h)

{

	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}

