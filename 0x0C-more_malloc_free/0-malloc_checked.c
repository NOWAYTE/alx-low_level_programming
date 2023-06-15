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
	unsigned int i;

	i = (unsigned int*)malloc(sizeof(b));

	if (b == 0)
	{
		exit(98);
	}
	return (i);
}
