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

	while (h != NULL)
	{

		if (h->str == NULL)
		{
			printf(" [0] (nil)\n");
		}

		printf("%u %s", h->len, h->str);

		h= h->next;
	}

	return (i);
}


