#include "lists.h"
/**
 * add_node_end - new node to the list
 * @head: input
 * @s: input
 * Return: output
 */

list_t *add_node_end(list_t **head, const char *s)
{
unsigned int i;

list_t *m = (list_t *)malloc(sizeof(list_t));
list_t *n;

n = *head;

if (m == NULL)
	return (NULL);
m->str = strdup(s);
for (i = 0; s[i] != '\0'; i++)
	;
m->len = i;
m->next = NULL;

if (*head == NULL)
	*head = m;
else
{
	while (n->next != NULL)
	n = n->next;
	n->next = m;
}
return (m);
}
