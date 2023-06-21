#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * given as a parameter
 *
 * @array: integer pointer parameter
 * @size: size of the array
 * @action: pointer to function
 *
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
