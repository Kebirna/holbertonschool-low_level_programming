#include "lists.h"

/**
 * add_dnodeint - Adds new node at the beginning
 * @head: list header pointer.
 * @n: node's data
 * Return: direction of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->prev = NULL;
	new_node->n = n;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
