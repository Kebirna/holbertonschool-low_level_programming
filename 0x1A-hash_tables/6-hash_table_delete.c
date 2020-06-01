#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the hash table
 * @ht: Pointer to hash table data structure
 *
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tmp_node = NULL;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next != NULL)
			{
				while (ht->array[i] != NULL)
				{
					tmp_node = ht->array[i]->next;
					free(ht->array[i]->key);
					free(ht->array[i]->value);
					free(ht->array[i]);
					ht->array[i] = tmp_node;
				}
			}
			else
			{
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
			}
		}
	i++;
	}
	free(ht->array);
	free(ht);
}
