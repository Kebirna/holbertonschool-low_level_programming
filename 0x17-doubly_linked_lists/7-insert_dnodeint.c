#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at given index
 * @h: list header pointer.
 * @idx: index where to insert new node.
 * @n: data to store.
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *tmp2 = NULL;
	dlistint_t *new_node = NULL;
	unsigned int idx_count_init = 0;
	unsigned int idx_count = 0;

	while (tmp)
	{
		tmp = tmp->next;
		idx_count_init++;
	}
	tmp = *h;
	if (idx > idx_count_init)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	for (; idx_count < idx; idx_count++)
		tmp = tmp->next;
	new_node->prev = tmp->prev;
	new_node->next = tmp;
	tmp2 = tmp;
	tmp2 = tmp->prev;
	tmp->prev = new_node;
	new_node->n = n;
	tmp2->next = new_node;
	return (new_node);
}
