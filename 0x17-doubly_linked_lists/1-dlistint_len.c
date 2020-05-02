#include "lists.h"

/**
 * dlistint_len - Returns # of elements in a list
 * @h: list header pointer.
 * Return: # of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);

}
