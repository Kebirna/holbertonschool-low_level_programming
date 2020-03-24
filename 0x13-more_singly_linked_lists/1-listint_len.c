#include "lists.h"

/**
 * listint_len - prints the # of nodes of a struct
 * @h: pointer to the header of the list
 * Return: # of elements of the linked list
 */

size_t listint_len(const listint_t *h)
{
	unsigned long int counter;

	counter = 0;
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
return (counter);
}
