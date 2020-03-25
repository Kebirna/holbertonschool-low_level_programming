#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node in an index position
 * @head: pointer to the header of the list
 * @idx: Index position to put the new node
 * @n: Data of the new node
 * Return: Address ot the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter;
	listint_t *new_node;

	counter = 0;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (counter < idx)
	{
		head = &(*head)->next;
		counter++;
	}
	new_node->next = head;
	(*head)->next = new_node;
return (new_node);
}
