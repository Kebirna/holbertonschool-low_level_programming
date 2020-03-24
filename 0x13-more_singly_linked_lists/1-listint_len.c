#include "lists.h"

/**
 * listint_le - prints the # of nodes of a struct
 * @h: pointer to the header of the list
 * Return: # of elements of the linked list
 */

size_t listint_len(const listint_t *h)
{
	unsigned long int counter;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
return (counter);
}
