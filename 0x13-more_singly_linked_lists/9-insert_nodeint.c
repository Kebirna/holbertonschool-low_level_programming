#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a node in a given index
 * @head: pointer to the head of the list
 * @idx: Position in which the node to be inserted
 * @n: Data of the new node
 * Return: Address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int counter;

	counter = 0;

	if (*head == NULL)
		return (NULL);

	while (counter < idx)
	{
		if (*head == NULL)
			return (NULL);
		*head = (*head)->next;
		counter++;
	} /*head now points to the index node*/
	new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
