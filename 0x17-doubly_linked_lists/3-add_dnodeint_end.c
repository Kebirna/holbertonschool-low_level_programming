#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at the end of list
 * @head: list header pointer.
 * @n: node's data
 * Return: direction of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (tmp == NULL)
		*head = new_node;
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	new_node->prev = tmp;
	new_node->next = NULL;
	new_node->n = n;
	/**tmp = new_node;*/
	return (new_node);
}
