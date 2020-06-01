#include "hash_tables.h"

/**
 * hash_table_get - Takes a key and returns its value or null
 * @ht: Pointer to hash table data structure
 * @key: String used to generate hash value and, later, index value
 *
 * Return: char * with value if succeeded, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index] != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (0);
}
