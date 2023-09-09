#include "hash_tables.h"

/**
 * key_index - Get the index where key/value pair should be stored
 * @key: Index of.
 * @size: Hash table array size
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	return (hash_djb2(key) % size);
}

