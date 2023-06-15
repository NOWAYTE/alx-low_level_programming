#include "main.h"
/**
 * _calloc - function that allocates memory
 *
 * @nmemb: integer parameter
 * @size: integer parameter
 *
 * Return: returns pointer to the memory
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc((size) * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i != nmemb * size; i++)
	{
		array[i] = 0;
	}

	return ((void *)(array));
}
