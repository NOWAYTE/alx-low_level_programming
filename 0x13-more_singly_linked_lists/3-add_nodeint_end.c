#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end
 *
 * @head: pointer to head
 * @n: int new node
 *
 * Return: returns the address of th new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *n_node;

	listint_t *y;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		return (NULL);

	}

	n_node->n = n;
	n_node->next = NULL;


	if (*head == NULL)
	{
		*head = n_node;

		return (n_node);

	}

	y = *head;

	while (y->next != NULL)
	{

		y = y->next;

	}

	y->next = n_node;


	return (n_node);
}
