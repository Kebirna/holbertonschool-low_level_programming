#include "lists.h"

/**
 * free_listint - Free memory of a linked list
 * @head: pointer to the header of the list
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
