#include "lists.h"

/**
  * sum_listint - sums the data
  * @h: input
  * Return: output
  */

int sum_listint(listint_t *h)
{

int s = 0;

if (h == NULL)

return (0);

while (h != NULL)
	{
	s += h->n;
	h = h->next;
	}

return (s);
}
