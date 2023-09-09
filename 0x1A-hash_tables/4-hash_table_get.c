#include "hash_tables.h"
/**
 * hash_table_get - Retrieve the value associated
 * with a key in a hash table.
 * @ht: pointer to hash table.
 * @key: The key to get the value of.
 *
 * Return: returns value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int x;

	if (ht == NULL || key == NULL || *key == '\0')
	{

		return (NULL);
	}

	x = key_index((const unsigned char *)key, ht->size);

	if (x >= ht->size)
	{

		return (NULL);
	}

	n = ht->array[x];

	while (n && strcmp(n->key, key) != 0)
	{

		n = n->next;

	}

	if (n == NULL)
	{
		return (NULL);

	}

	else
	{
		return (n->value);
	}
}

