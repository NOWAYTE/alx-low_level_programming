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
	void *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(size) * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i != '\0'; i++)
	{
		array = 0;
	}

	return (array);
}
