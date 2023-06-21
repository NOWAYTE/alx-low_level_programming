#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: integer pointer parameter
 * @size: number of elements in the array
 * @cmp: function pointer to be used to compare values
 *
 * Return: returns the index of the first element
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return;
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if  (cmp(array[i]))
		{
			return (i);
		}
		else
		{
			return (-1);
		}

	}

	return (0);
}

