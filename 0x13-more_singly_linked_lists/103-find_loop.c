#include "lists.h"
/**
 * find_listint_loop - functiont that finds the loop in a
 * linked list
 *
 * @head: pointer to head
 *
 * Return: returns the address of the node
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s;

	listint_t *f;

	s = head;

	f = head;


	while ((s && f) != '\0' && f->next != NULL)
	{
		s = s->next;
		f = f->next->next;


		if (s == f)
		{

			return (s);

		}

	}

	return (NULL);

}
