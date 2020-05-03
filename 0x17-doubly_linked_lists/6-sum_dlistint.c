#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - the sum of all the data
 * @head: output
 * Return: output
**/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

dlistint_t *node;

	node = head;
	while (node)

	{
		sum += node->n;
		node = node->next;
	}

return (sum);
}

