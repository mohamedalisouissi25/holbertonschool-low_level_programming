#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node
 * @head: input
 * @n: input
 * Return: output
**/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *new, *node;

	if (head == NULL)
		return (NULL);

	new = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	node = *head;

	while (node->next)
		node = node->next;
	node->next = new;
	new->prev = node;
	return (new);
}
