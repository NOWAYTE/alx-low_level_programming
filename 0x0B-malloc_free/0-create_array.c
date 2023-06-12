#include "main.h"
/**
 * create_array - A function that creates an array of char
 * @size: integer parameter
 * @c: character parameter
 *
 * Return: Always 0 (success)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while( i < size)
	{
		ptr[i] = c;
		
		i++;
	}

	return (ptr);
}
