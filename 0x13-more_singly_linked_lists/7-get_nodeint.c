#include "lists.h"

/**
 * get_nodeint_at_index - Go to a node for it's index
 * @head: pointer to the header of the list
 * @index: Index of the node to be returned
 * Return: Address of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	counter = 0;

	if (!head)
		return (NULL);

	while (counter < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		counter++;
	}
return (head);
}
