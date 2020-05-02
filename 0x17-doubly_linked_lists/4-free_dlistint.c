#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at the end of list
 * @head: list header pointer.
 * @n: node's data
 * Return: direction of new node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	dlistint_t *tmp2;

	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}
}
