#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node
 * @head: input
 * @n: input
 * Return: output
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)

	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	if (new->next != NULL)
	{
		(new->next)->prev = new;
	}
	return (new);
}
