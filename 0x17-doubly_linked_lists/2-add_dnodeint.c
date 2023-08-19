#include "lists.h"
/**
 * add_dnodeint - add  new node  beginning
 * @head: double pointer
 * @n: data
 *
 * Return: The address of the new
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;
	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;


	n_node->next = *head;

	n_node->prev = NULL;

	if (*head != NULL)

		(*head)->prev = n_node;

	*head = n_node;




	return (n_node);
}
