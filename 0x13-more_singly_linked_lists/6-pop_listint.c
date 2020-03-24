#include "lists.h"

/**
 * pop_listint - deletes the head
 * @h: input
 * Return: output
 */

int pop_listint(listint_t **h)

{

int i;
listint_t *x = *h;

if (*h == NULL)
return (0);

i = (*h)->n;
free(*h);

x = x->next;
*h = x;

return (i);

}
