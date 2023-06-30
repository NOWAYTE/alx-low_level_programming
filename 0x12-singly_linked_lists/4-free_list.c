#include "lists.h"
/**
 * free_list - function that free a list_t
 *
 * @head: head of the list
 *
 */

void free_list(list_t *head)
{

	list_t *ptr;

	while (head !=  NULL)
	{


		ptr = head->next;

		free(head->str);

		free(head);
		head =  ptr;

	}

}
