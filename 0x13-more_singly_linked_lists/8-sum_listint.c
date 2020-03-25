#include "lists.h"

/**
 * sum_listint - Adds all the data of a list
 * @head: pointer to the header of the list
 * Return: Sum of the list's data
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
return (sum);
}
