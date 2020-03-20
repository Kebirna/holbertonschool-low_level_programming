#include "lists.h"
/**
 * list_len - returns the # of elements of a list
 * @h: input
 * Return: # of elements of the linked list
 */

size_t list_len(const list_t *h)
{
	unsigned long counter;

	counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			/*printf("[0] (nil)\n");*/
			h = h->next;
			counter++;
		}
		else
		{
		/*printf("[%d] ", h->len);*/
		/*printf("%s\n", h->str);*/
		h = h->next;/*This gives the iteration*/
		counter++;/*Only for the return*/
		}
	}
	return (counter);
}
