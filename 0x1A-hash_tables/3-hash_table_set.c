#include "hash_tables.h"

/**
 * hash_table_set - Takes the key and returns its index for the array
 * @ht: Pointer to hash table data structure
 * @key: String used to generate hash value and, later, index value
 * @value: String to store in the hash node
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *tmp;
	unsigned long int index = 0;
	unsigned int counter = 0;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (tmp = ht->array[index]; tmp != NULL; tmp = tmp->next)
	{
		if ((strcmp(tmp->key, key)) == 0)
		{
			free(tmp->value);
			tmp->value = strdup((char *)value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		counter++;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (counter != 0)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	ht->array[index] = new_node;
	return (1);
}
