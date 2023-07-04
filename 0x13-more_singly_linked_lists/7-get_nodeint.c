#include "lsits.h"
/**
 * get_nodeint_at_index - Function that returns the number
 * of node
 *
 * @head: pointer to head
 *
 * @index: position of the node
 *
 * Return: returns the nth node
 *
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head != NULL)
	{
		for (i = 0; i < index; i++)
		{
			head = head->next;

		}

	}

	return (head);

}
