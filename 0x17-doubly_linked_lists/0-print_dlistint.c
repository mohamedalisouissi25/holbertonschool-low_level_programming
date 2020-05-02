#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print the elements
 * @head: input
 * Return: output
 */
size_t print_dlistint(const dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}
	return (i);
}
