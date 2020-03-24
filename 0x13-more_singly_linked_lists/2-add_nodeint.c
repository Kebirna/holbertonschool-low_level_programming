#include "lists.h"

/**
 * add_nodeint - add node at the beginning of the list
 * @head: pointer to the header of the list
 * @n: data to set into the node
 * Return: # of elements of the linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

	new_node = malloc(sizeof(listint_t));
	if(new_node == NULL)
		return (NULL);
	tmp = *head;/*tmp point to what header points*/
	new_node->n = n;
	new_node->next = tmp;/*The new node point to what was first*/
	*head = new_node;/*The first element now is new_node*/

return (new_node); /*Not sure if it is with &*/
}