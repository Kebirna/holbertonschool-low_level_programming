#include "lists.h"

/**
 * print_dlistint - Prints a linked list forward.
 * @h: list header pointer.
 * Return: # of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
