#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: NULL if there's no loop.
 * else - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;
	if (head == NULL || head->next == NULL)
		return (NULL);

	a = head->next;
	b = (head->next)->next;
	while (b)
	{
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				b = a->next;
				b = b->next;
			}
			return (a);
		}
		a = a->next;
		b = (b->next)->next;
	}

	return (NULL);
}
