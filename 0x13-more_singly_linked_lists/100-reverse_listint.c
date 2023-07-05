#include "lists.h"
/**
 * reverse_listint - Function that reversesa listint_t
 *
 * @head: pointer to head
 *
 * Return: returns the reversed list
 *
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *n;

	listint_t *p;

	n = NULL;
	p = NULL;

	while (head)
	{

		n = (*head)->next;
		(*head)->next = p;


		p = *head;

		*head = n;

	}

	*head = p;

	return (*head);

}


