#include "lists.h"

/**
 * sum_dlistint - sum total nodes
 * @head: list header pointer.
 *
 * Return: sum of nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
