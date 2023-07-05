#include "lists.h"
/**
 * free_listint_safe - Function that free a lisint_t
 *
 * @h: pointer head
 *
 * Return: returns the size of the list
 *
 */


size_t free_listint_safe(listint_t **h)
{

	listint_t *tr;
	listint_t *s;
	listint_t *f;

	size_t i = 0;

	if (h == NULL)
	{
		if (*h == NULL)
		{
			return (i);
		}
	}

	s = *h;
	f = *h;


	while ((s && f) != NULL && f->next != NULL)
	{
		tr = s;

		s = s->next;
		f = f->next->next;

		free(tr);

		i++
	}

	if (s == f)
	{

		tr = s;

		s = s->next;

		free(tr);

		i++;

	}


	*h = NULL;


	return (i);

}
