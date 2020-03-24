#include "lists.h"

/**
 * free_listint - free list
 * @h: input
 * Return: output
 */

void free_listint(listint_t *h)
{
listint_t *i;

if (!h)

return;

while (h)
	{
	i = h;
	h = h->next;
	free(i);
	}
}
