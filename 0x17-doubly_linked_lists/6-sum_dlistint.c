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

	for (y = head; y != NULL; y = y->next)
	{

		
		x += y->n;
	}




	return (x);
}
