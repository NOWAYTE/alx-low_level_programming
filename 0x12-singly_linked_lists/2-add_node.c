#include "lists.h"
/**
 * add_node - function that adds a new node
 *
 * @head - head of the list
 * @str - pointer to the lit
 *
 * Return: returns the addres of the new element
 */

list_t *Add_node(list_t **head, const char *str)
{

	list_t *nd;
	
	size_t i = 0;

	while (str[i])
	{
		i++;

	}

	nd = (Node*)malloc(sizeof(list_t));

	if (nd == NULL)
	{
		return (NULL);

	}

	nd->str = strdup(str);
	nd->len = len;
	nd->next = *head;

	*head = nd;


	return (nd);

}
