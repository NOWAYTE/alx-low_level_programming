#include "hash_tables.h"
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: returns pointer to the new sorted hash table 
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h;
	unsigned long int i;

	h = malloc(sizeof(shash_table_t));
	{
		if (h == NULL)
		{
			return (NULL);

		}
	}

	h->size = size;
	h->array = malloc(sizeof(shash_node_t *) * size);
	if (h->array == NULL)
	{

		return (NULL);
	}
	for (i = 0; i < size; i++)
	{

		h->array[i] = NULL;

	}
	h->shead = NULL;
	h->stail = NULL;

	return (h);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to sorted hash table.
 * @key: The key to add - not an empty string.
 * @value: The value associated with key.
 *
 * Return: 1 (success)
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *n, *t;
	char *v_copy;
	unsigned long int x;

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
	t = ht->shead;

	while (t)
	{
		if (strcmp(t->key, key) == 0)
		{
			free(t->value);
			t->value = v_copy;
			return (1);

		}
		t = t->snext;
	}

	n = malloc(sizeof(shash_node_t));

	if (n == NULL)
	{

		free(v_copy);
		return (0);

	}
	n->key = strdup(key);

	if (n->key == NULL)
	{

		free(v_copy);
		free(n);
		return (0);
	}
	n->value = v_copy;
	n->next = ht->array[x];
	ht->array[x] = n;

	if (ht->shead == NULL)
	{

		n->sprev = NULL;
		n->snext = NULL;
		ht->shead = n;
		ht->stail = n;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{

		n->sprev = NULL;
		n->snext = ht->shead;
		ht->shead->sprev = n;
		ht->shead = n;
	}
	else
	{

		t = ht->shead;
		while (t->snext != NULL && strcmp(t->snext->key, key) < 0)
		{
			t = t->snext;

		}
		n->sprev = t;
		n->snext = t->snext;
		if (t->snext == NULL)
		{
			ht->stail = n;

		}
		else
		{

			t->snext->sprev = n;
		}

		t->snext = n;
	}

	return (1);
}

/**
 * shash_table_get - Retrieve the value
 * associated with a key in a sorted hash table.
 * @ht: pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *n;
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

	n = ht->shead;

	while (n != NULL && strcmp(n->key, key) != 0)
	{

		n = n->snext;
	}

	return ((n == NULL) ? NULL : n->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
	{

		return;
	}

	n = ht->shead;

	printf("{");

	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->snext;

		if (n != NULL)
		{
			printf(", ");
		}

	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
	{
		return;

	}

	n = ht->stail;
	printf("{");

	while (n != NULL)
	{

		printf("'%s': '%s'", n->key, n->value);
		n = n->sprev;

		if (n != NULL)
		{

			printf(", ");

		}
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *n, *t;

	if (ht == NULL)
	{

		return;

	}

	n = ht->shead;
	while (n)
	{

		t = n->snext;
		free(n->key);
		free(n->value);
		free(n);
		n = t;

	}

	free(head->array);
	free(head);
}
