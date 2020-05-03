#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node
 * @head: input
 * @index: input
 * Return: output
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
unsigned int i;

dlistint_t *node;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	node = head;

	for (i = 1; node->next; i++)
	{
		node = node->next;
		if (i == index)
			return (node);
	}

return (NULL);
}
