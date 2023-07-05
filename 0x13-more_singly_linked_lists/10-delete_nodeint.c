#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes a node
 * @head: pointer to head
 * @index: position
 *
 * Return: 1 (success) -1 (failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tr;
	listint_t *n_node;

	unsigned int i = 0;

	tr = *head;

	if (*head == NULL)
	{
		return (-1);

	}

	if (index == 0)
	{
		*head = tr->next;

		free(tr);

		return (-1);

	}

	index = index - 1;


	while (i < index)
	{

		if (tr == NULL)
		{
			if (tr->next == NULL)
			{
				return (-1);

			}

		tr = tr->next;

		i++;

		}

	}


	n_node = tr->next->next;

	free(tr->next);


	tr->next = n_node;


	return (1);

}


