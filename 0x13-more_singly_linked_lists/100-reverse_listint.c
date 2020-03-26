#include "lists.h"

/**
 * reverse_listint - Reverse a linked list
 * @head: pointer to the head of the list
 * Return: Address of the new node
 */

listint_t *reverse_listint(listint_t **head)
{
	{
	listint_t *new_node;
	unsigned int counter;

	counter = 0;

	if (*head == NULL)
		return (NULL);

	while (counter < 10)
	{
		if (*head == NULL)
			return (NULL);
		*head = (*head)->next;
		counter++;
	} /*head now points to the index node*/
	new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
	*head = new_node;
	return (new_node);
}
