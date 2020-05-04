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
	dlistint_t *tmp2 = head;
	unsigned int counter = 0;
	unsigned int counter2 = 0;

	while (tmp2->next != '\0')
	{
		tmp2 = tmp2->next;
		counter2++;
	}
	if (index > counter2)
		return (NULL);
	for (; counter < index; counter++)
		tmp = tmp->next;
	return (tmp);
}
