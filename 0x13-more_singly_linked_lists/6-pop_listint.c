#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pops off the head of the list and returns its contents
 * @head: head of the list
 * Return: contents of head
 */

int pop_listint(listint_t **head)

{
	int i;
	listint_t *x, *y;

	if (head == NULL)
		return (0);
	y = x = *head;
	if (*head)
	{
		i = x->n;
		*head = x->next;
		free(y);
	}
	else
		i = 0;
	return (i);
}
