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

	int i;

	if (head == NULL)
	{

		return (0);

	}

	tr = *head;
	
	n = tr->i;

	*head = (*head)->next;

	free(tr);

	return (n);

}
