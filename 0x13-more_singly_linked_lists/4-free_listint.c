#include "lists.h"
/**
 * free_listint - function that free a list
 *
 * @head: pointer to head
 *
 */

void free_listint(listint_t *head)
{
	listiint_t *tr;


	while (h)
	{
		tr = head;

		head = head->next;
		free(tr);

	}

}
