#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the
 * beggining of a list
 *
 * @head: pointer to head
 * @n: int new node
 *
 * Return: returns the address of the new element
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;


	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
	
		return (NULL);

	}

	n_node->n = n;
	n_node->next = *head;
	*head = n_node;


	return (n_node);

}
