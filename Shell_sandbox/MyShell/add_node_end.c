#include "holberton.h"
/**
 * *add_node_end - Adds a new node at the end of the struct
 * @head: pointer to the header of struct
 * @str: data to be included into the node
 * Return: pointer to the new head of struct
 */

token_necklace *add_node_end(token_necklace **head, const char *str)
{
	token_necklace *newnode, *temporal;
	int lenght;

	newnode = malloc(sizeof(token_necklace));

	if (newnode == NULL)
		return (NULL);

	lenght = _strlen(str);
	newnode->token = strdup(str);
	newnode->next = NULL;

	if ((*head)->next == NULL)
	{
		*head = newnode;
	}
	else
	{
		temporal = *head;
		while (temporal->next != NULL)
		{
			temporal = temporal->next;
		}
		temporal->next = newnode;
	}
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
