#include "lists.h"
/**
 * pop_listint - Function that deletes the head node
 *
 * @head: pointer to head 
 *
 * Return: returns the heads node
 *
 */

int pop_listint(listint_t **head)
{

	listint_t *tr;

	int i = 0;

	if (head == NULL)
	{

		return (0);

	}

	tr = *head;
	
	i = tr->n;

	*head = (*head)->next;

	free(tr);

	return (i);

}
