#include "hash_tables.h"
/**
 * hash_table_set - Add/update an element in hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *v_copy;
	unsigned long int x, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{

		return (0);

	}

	v_copy = strdup(value);

	if (v_copy == NULL)
	{

		return (0);
	}

	x = key_index((const unsigned char *)key, ht->size);

	for (i = x; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{

			free(ht->array[i]->value);
			ht->array[i]->value = v_copy;
			return (1);

		}
	}

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{

		free(v_copy);
		return (0);

	}
	n->key = strdup(key);

	if (n->key == NULL)
	{
		free(n);
		return (0);
	}

	n->value = v_copy;
	n->next = ht->array[x];
	ht->array[x] = n;

	return (1);
}
