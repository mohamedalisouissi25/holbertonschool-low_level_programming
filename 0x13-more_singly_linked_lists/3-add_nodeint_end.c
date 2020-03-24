#include "lists.h"

/**
 * add_nodeint_end - add node
 * @h: input
 * @n: input
 * Return: output
 */

listint_t *add_nodeint_end(listint_t **h, const int n)

{

listint_t *i = (listint_t *)malloc(sizeof(listint_t));
listint_t *j = *h;

if (i == NULL)
return (NULL);

i->n = n;
i->next = NULL;


if (*h == NULL)
	*h = i;
else
	{
	while (j->next)
		j = j->next;
	j->next = i;
	}

return (i);
}
