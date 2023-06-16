#include "main.h"
/**
 * array_range - function that creates an array 
 * @min: integer parameter
 * @max: integer parameter
 *
 * Return: returns pointer to a space
 *
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) *  (max - min +1));

	if (array == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		array[i] = min;

		i++;
	}
	return (array);
}
