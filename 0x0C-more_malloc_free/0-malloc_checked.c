#include "main.h"
/**
 * malloc_checked - function that allocates memory
 *
 * @b: integer parameter
 *
 * Return: returns pointer to newly allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
