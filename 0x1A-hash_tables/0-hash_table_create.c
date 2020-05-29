#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: A pointer to the table or NULL
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr = NULL;

	ptr = malloc(sizeof(hash_table_t) * 1);
	if (ptr == NULL)
		return (NULL);

	ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (ptr->array == NULL)
		return (NULL);
	ptr->size = size;
	return (ptr);
}
