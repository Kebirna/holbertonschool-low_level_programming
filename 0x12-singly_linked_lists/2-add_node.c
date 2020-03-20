#include "lists.h"
/**
 * *add_node - Adds a new node at the begining of the struct
 * @head: pointer to the header of struct
 * @str: data to be included into the node
 * Return: pointer to the new head of struct
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int lenght;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

		lenght = _strlen(str);
		newnode->str = strdup(str);
		newnode->len = lenght;
		newnode->next = *head;

	*head = newnode;
	return (newnode);
}

/**
 * _strlen - returns length of a string
 * @s: pointer to string
 *
 * Return: String lenght
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

return (i);
}
