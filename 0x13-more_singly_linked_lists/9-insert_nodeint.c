#include "lists.h"
/**
 * insert_nodeint_at_index - Functiont that inserts a new node
 *
 * @head: pointer to head
 *
 * @idx: index of linked list
 * @n: data stored
 *
 * Return: returns the address of the new node
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node;
	listint_t *tr;

	unsigned int i = 0;

	tr = *head;

	n_node = malloc(sizeof(listint_t));


	if (n_node == NULL)
	{
		return (NULL);

	}

	n_node->n = n;

	n_node->next = NULL;


	if (idx == 0)
	{

		n_node->next = *head;


		*head = n_node;

		return (n_node);

	}

	idx = idx - 1;

	while (i < idx)
	{

		if (tr == NULL)
		{
			if (tr->next == NULL)
			{
				return (NULL);

			}

		}

	}


	n_node->next = tr->next;
	tr->next = n_node;


	return (n_node);


}

