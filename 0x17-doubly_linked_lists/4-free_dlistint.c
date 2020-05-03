#include "lists.h"

/**
 * free_dlistint - Frees heap memory
 * @head: list header pointer.
 * Return: nothing
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
