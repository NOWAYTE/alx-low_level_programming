#include "lists.h"
/**
 * free_listint2 - Function that free a list
 *
 * @head: pointer to head
 *
 */

void free_listint2(listint_t **head)
{

	listint_t *tr;


	if (head == NULL)
	{

		while (head)
		{
			tr = *head;

			*head = (*head)->next;

			free(temp);

		}


	}

	*head = NULL;

}
