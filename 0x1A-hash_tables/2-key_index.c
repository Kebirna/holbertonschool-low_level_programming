#include "hash_tables.h"

/**
 * key_index - Takes the key and returns its index for the array
 * @key: string used to generate hash value
 * @size: Hast table array size
 * Return: index value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0, index = 0;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
