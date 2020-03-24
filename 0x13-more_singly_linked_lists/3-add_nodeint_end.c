#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the list
 * @head: pointer to the header of the list
 * @n: data to set into the node
 * Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temporal;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head ==  NULL)/*Works! Head can only be NULL or a direction*/
	{
		*head = new_node;
	}
	else
	{
		temporal = *head;/*temporal will loop through to the nodes*/

		while (temporal->next != NULL)
		{
			temporal = temporal->next;/*This loops, changing the pointer*/
		}
		temporal->next = new_node;
	}
	return (new_node);
}
