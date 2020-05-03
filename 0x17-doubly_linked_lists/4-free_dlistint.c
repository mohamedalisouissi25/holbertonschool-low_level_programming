#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a linked list
 * @head: input
 * Return: output
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node  = head->next;
		free(head);
		head = node;
	}
}
