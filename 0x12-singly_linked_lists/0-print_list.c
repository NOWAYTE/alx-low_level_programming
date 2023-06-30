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
	const list_t *head = h;
	size_t i = 0;


	while (head != NULL)
	{

		if (head == NULL)
		{
			printf(" [0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);

			head = head->next;

			i++;

		}
	}

	return (i);
}


