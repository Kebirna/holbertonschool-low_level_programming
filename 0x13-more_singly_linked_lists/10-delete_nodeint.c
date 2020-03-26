#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node in a given index
 * @head: pointer to the head of the list
 * @index: Position in which the node to be deleted
 * Return: Address of the new node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter;

	counter = 0;

	if (*head == NULL)
		return (-1);

	while (counter < index)
	{
		if (*head == NULL)
			return (-1);
		*head = (*head)->next;
		counter++;
	} /*head now points to the index node*/
	free(*head);
	*head = (*head)->next;
	return (1);
}
