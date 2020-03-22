#include "lists.h"

/**
 *list_len - counts the number of a linked list
 *@h: input
 *Return: output
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
