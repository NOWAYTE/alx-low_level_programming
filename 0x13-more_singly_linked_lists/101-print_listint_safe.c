#include "lists.h"
/**
 * print_listint_safe - Function that prints listint_t linked list
 *
 * @head: pointer to head
 *
 * Return: returns the total number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s;

	const listint_t *f;

	size_t i = 0;

	if (head == NULL)
	{

		exit(98);

	}

	s = head;

	f = head;


	while (s)
	{
		while (f)
		{
			while (f->next != NULL)
			{
				printf("[%p] %d\n", (void *)s, s->n);
				i++;

				s = s->next;
				f = f->next;


				if (s == f)
				{
					printf("->[%p] %d\n", (void *)s, s->n);

					return (i);

				}

			}
		}
	}


	while (s)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		i++;
		s = s->next;

	}


	return (i);


}

