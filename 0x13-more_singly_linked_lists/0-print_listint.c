#include "lists.h"

/**
 * print_listint - prints the data of a structure
 * @h: pointer to the header of the list
 * Return: # of elements of the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
return (counter);
}
