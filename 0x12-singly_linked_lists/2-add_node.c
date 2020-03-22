#include "lists.h"

/**
 * add_node - add node
 * @head: input
 * @s: input
 * Return: output
 */

list_t *add_node(list_t **head, const char *s)

{
unsigned int i;

list_t *m = (list_t *)malloc(sizeof(list_t));

if (m == NULL)
	return (NULL);

	m->str = strdup(s);

	for (i = 0; s[i] != '\0'; i++)
		;
	m->len = i;
	m->next = *head;
	*head = m;

return (m);
}
