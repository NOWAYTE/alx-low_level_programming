#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node
 * @h: pointer to head
 * @idx: place to add new node 
 * @n: data
 * 
 * Return: returns the address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t n_node = NULL, *tmp = *h;
	unsigned int i = 0;

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
	{
		return (NULL);

	}

	n_node-> = n;

	if (idx == 0)
	{
		n_node->next = *h;

		n_node->prev = NULL;

		if (*h != NULL)
		{
			(*h)->prev = n_node;

		}

		*h = n_node;



		return (n_node);

	}

	while (i < idx - 1)
	{

		if (tmp == NULL)
		{

			free(n_node);
			return (NULL);

		}

		tmp = tmp->next;

		i++;

	}

	n_node->next = tmp->next;
	n_node->prev = tmp;

	if (tmp->next != NULL)
	{

		tmp->next->prev = n_node;

	}

	tmp->next = n_node;


	return (n_node);
}
