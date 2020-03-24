#include "lists.h"

/**
 * free_listint - Free memory of a linked list
 * @head: pointer to the header of the list
 * 
 * Return: Void
 */

int pop_listint(listint_t **head)
{
	listint_t *temporal;
	listint_t *for_free;
	int data;

	if (head == NULL)
		return (0);
	temporal = *head;
	for_free = *head;
	data = temporal->n;/*is tmp already in the node?*/
	temporal = temporal->next;
	*head = temporal;
	free(for_free);
	return (data); 
}