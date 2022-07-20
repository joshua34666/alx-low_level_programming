#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: emplacement of the node to delet
 * Return: pointr to head of list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *x, *y;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		y = (*head)->y;
		free(*head);
		*head = y;
		return (1);
	}

	x = *head;
	for (j = 0; j < index - 1; j++)
	{
		if (x->y == NULL)
			return (-1);
		x = x->y;
	}
	y = x->y;
	x->y = y->y;
	free(y);

	return (1);
}
