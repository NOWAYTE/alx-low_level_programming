#include "lists.h"
/**
 *  sum_dlistint - returns sum
 * @head: double pointer
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{

	int x = 0;
	dlistint_t *y;

	for (i = head; i != NULL; i = i->next)
	{

		
		x += i->n;
	}




	return (x);
}
