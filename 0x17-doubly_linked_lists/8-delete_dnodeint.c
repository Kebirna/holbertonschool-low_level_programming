#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at given index
 * @head: list header pointer.
 * @index: index where to insert new node.
 *
 * Return: -1 if failure, 1 if success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *tmp2 = NULL;
	dlistint_t *tmp3 = *head;
	unsigned int counter = 0;
	unsigned int idx_count_init = 0;

	if (*head == NULL)
		return (1);
	while (tmp3)
	{
		tmp3 = tmp3->next;
		idx_count_init++;
	}
	if (index > idx_count_init)/*Error handling*/
		return (-1);
	while (counter < index)
	{
		tmp = tmp->next;
		counter++;
	}
	if (idx_count_init == index)/*C case*/
	{
		tmp2 = tmp->prev;/*Steps a node behind*/
		tmp2->next = NULL;
		free(tmp);
	}
	else if (index == 0)/*A case*/
	{
		tmp3 = tmp->next; /*Steps a node after*/
		if (idx_count_init > 1)
		{
			tmp3->prev = NULL;
			*head = tmp3;
		}
		if (tmp->next != NULL)
			free(tmp);
		if (tmp->next == NULL)
		{
			free(tmp);
			*head = '\0';
		}
	}
	else/*B case*/
	{
		tmp2 = tmp->prev;
		tmp3 = tmp->next;
		free(tmp);
		tmp2->next = tmp3;
		tmp3->prev = tmp2;
	}
	return (1);
}
