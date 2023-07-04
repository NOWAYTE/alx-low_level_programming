#include "lists.h"
/**
 * sum_listint - Function sums all the data
 *
 * @head: pointer to head
 *
 * Return: returns the sum of all the data
 *
 */

int sum_listint(listint_t *head)
{
	listint_t *tr;

	int i = 0;

	tr = head;

	while (tr)
	{

		i += tr->n;
		tr = tr->next;

	}

	return (i);

}


