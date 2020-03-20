#include "lists.h"
/**
 * print_list - prints the data of a structure
 * @h: input
 * Return: # of elements of the linked list
 */

size_t print_list(const list_t *h)
{
	unsigned long counter;

	counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			counter++;
		}
		else
		{
		printf("[%d] ", h->len);
		printf("%s\n", h->str);
		h = h->next;/*This gives the iteration*/
		counter++;/*Only for the return*/
		}
	}
	return (counter);
}
