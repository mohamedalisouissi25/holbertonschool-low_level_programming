#include "lists.h"
/**
 * free_listint2 - free list
 * @h: input
 * Return:output
 */

void free_listint2(listint_t **h)

{
listint_t *i;

if (!h)
	return;
while (*h)
	{
	i = (*h)->next;
	free(*h);
	*h = i;
	}
*h = NULL;
}
