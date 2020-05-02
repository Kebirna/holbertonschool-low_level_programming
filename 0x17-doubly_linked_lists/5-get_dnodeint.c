#include "lists.h"

/**
 * get_dnodeint_at_index - finds data of a given node
 * @head: list header pointer.
 * @index: index position
 * Return: direction of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int counter = 0;

	for (; counter < index; counter++)
		tmp = tmp->next;
	return (tmp);
}
