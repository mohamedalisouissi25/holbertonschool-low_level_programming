#include "lists.h"

/**
 * listint_len - return numbers
 * @h: input
 * Return: output
 */

size_t listint_len(const listint_t *h)
{

size_t i = 0;

while (h)
	{
	i++;
	h = h->next;
	}
return (i);
}
