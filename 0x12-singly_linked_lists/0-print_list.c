#include "lists.h"
/**
 * print_list - a function that prints all the elements
 * of a list
 * @h: node
 *
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	int n;

	if (h->str == NULL)
	{
		printf("[0] (nil) \n");

	}

	for (n = 0; h != NULL; n++)
	{
		printf("%u %s \n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
}


