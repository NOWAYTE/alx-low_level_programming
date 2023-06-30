#include "lists.h"
/**
 * list_len - function that return the number of elements
 *
 * @h: pointer
 *
 * Return: returns the number of elements
 */

size_t list_len(const list_t *h)
{

	const list_t *head = h;

	size_t i = 0; 

	while (head != NULL)
	{
		i++;

		head = head->next;

	}

	return (i);

}

