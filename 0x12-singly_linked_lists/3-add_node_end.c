#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a file
 *
 * @head: head of the list
 * @str: pointer to the list
 *
 * Return: returns the addres of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *nd;
	list_t *ptr;

	size_t i = 0;

	while (str[i])
	{
		i++;

	}

	nd = malloc(sizeof(list_t));

	if (nd == NULL)
	{
		return (NULL);

	}

	nd->str = strdup(str);
	nd->len = i;
	nd->next = NULL;

	if (*head != NULL)
	{
		ptr = *head;

		while  (ptr->next != NULL)
		{
			ptr = ptr->next;

		}

		ptr->next = nd;
	}

	else
	{
		*head = nd;

	}

	return (nd);

}

