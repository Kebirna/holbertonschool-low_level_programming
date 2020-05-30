#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table by its index order
 * @ht: Pointer to hash table data structure
 *
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	int i = 0;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < SIZE)
	{
		if (ht->array[i] != NULL && flag == 0)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			flag++;
			i++;
			continue;
		}
		if (ht->array[i] != NULL)
			printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		i++;
	}
	printf("}\n");
}
