#include "lists.h"
/**
 * free_listint - function that free a list
 *
 * @head: pointer to head
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tr;


	while (head)
	{
		tr = head;

		head = head->next;
		free(tr);

	}

}
