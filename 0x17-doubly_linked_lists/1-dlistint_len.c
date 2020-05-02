#include "lists.h"

/**
 * dlistint_len - count the number of nodes
 * @head: input
 * Return: output
 */
size_t dlistint_len(const dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}

