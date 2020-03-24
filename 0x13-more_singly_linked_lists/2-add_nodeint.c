#include "lists.h"
/**
 * add_nodeint - add node
 * @head: input
 * @n: input
 * Return: output
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *m = (listint_t *)malloc(sizeof(listint_t));

if (m == NULL)

return (NULL);

m->n = n;
m->next = *head;
*head = m;

return (m);
}
