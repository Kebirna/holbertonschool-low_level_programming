#include "lists.h"

/**
 * free_listint - Free memory of a linked list
 * @head: pointer to the header of the list
 * 
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	
	free_listint2(&(*head)->next);
	free((*head));
	(*head) = NULL;
	 /*Not sure if it should be "**"*/
}