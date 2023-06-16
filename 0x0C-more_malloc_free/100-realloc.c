#include "main.h"
/**
 * _realloc - function that reallocates a memory block
 * @ptr: void pointer parameter
 * @old_size: integer parameter
 * @new_Size: integer parameter
 *
 * Return: returns a pointer
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;

	void n_ptr;


	if (ptr == NULL)
	{
		return (NULL);
	}

	if (new_size <= old_size)
	{
		return (ptr);
	}

	n_ptr = malloc(new_size);

	if (n_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < old_size; i++)
	{
		n_ptr[i] = ptr[i];
	}
	
	free(ptr);

	return (n_ptr);
