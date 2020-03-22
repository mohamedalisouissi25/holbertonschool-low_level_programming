#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head : input
 * Return : output
 */
void free_list(list_t *head)

{
	list_t *m;

	while (head)
	{
		m = head;
		head = head->next;
		free(m->str);
		free(m);
	}
}
