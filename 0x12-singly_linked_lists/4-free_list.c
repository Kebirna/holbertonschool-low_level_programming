#include "lists.h"
/**
 * free_list - Frees a list node
 * @head: pointer to the header of struct
 *
 * Return: None
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
		{
			free(head->str);
		}
		free(head);
	}
}
