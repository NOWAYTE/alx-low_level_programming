#include "lists.h"
/**
 * listint_len - a function that returns the number
 * of elements
 * @h: Pointer to head
 *
 * Return: number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *x = h;
	size_t i = 0;


	while (h != NULL)
	{
	
		i++;
		x = x->next;

	}

	return (i);

}
