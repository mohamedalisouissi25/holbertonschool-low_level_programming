#include "lists.h"

/**
  * get_nodeint_at_index - get a node
  * @h: input
  * @index: input
  * Return: output
  */

listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)

{
unsigned int i = 0;

while (h != NULL)

	{
	if (i == index)
	return (h);
	h = h->next;
	i++;
	}

return (NULL);
}
