#include "lists.h"
/**
 * get_dnodeint_at_index - returns node.
 * @head: double pointer
 * @index: index of node
 * Return: returns NULL of the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *c;

	unsigned int i = 0;

	current = head;

	while (current != NULL)
	{
		if (i == index)
			return (c);


		c = c->next;
		i++;
	}




	return (NULL);
}
