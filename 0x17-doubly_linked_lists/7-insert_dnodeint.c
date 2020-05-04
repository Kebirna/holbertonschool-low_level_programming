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
	while (idx_count < idx)
	{
		tmp = tmp->next;
		idx_count++;
		if (idx_count + 1 == idx_count_init)
			idx_count += 1;
	}
	if (idx_count_init != idx)/*If is not the last node*/
	{
		new_node->prev = tmp->prev;
		new_node->next = tmp;
	}
	else /*If it is the last node*/
	{
		new_node->next = NULL; new_node->prev = tmp;
		tmp->next = new_node;
	}
	new_node->n = n;
	if (idx != 0 && idx_count_init != idx) /*If is not the 1st or last node*/
	{
		tmp2 = tmp;
		tmp2 = tmp->prev;
		tmp->prev = new_node;
		tmp2->next = new_node;
	}
	if (idx == 0)/*If idx is the first node*/
		*h = new_node;
	return (new_node);
}
