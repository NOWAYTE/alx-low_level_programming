#include "search_algos.h"
/**
 * binary_search - A function that searches for a value in a sorted array
 *
 * @array: pointer to the first element
 * @size: number of elements in the array
 * @value: value to search for
 * Return: returns the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t mid;


	if (array == NULL)
	{
		return (-1);
	}

	while (l < r)
	{
		mid = (l + r) / 2;

		if (value == array[mid])
		{
			return (array[mid]);

		}

		else if (value < array[mid])
		{
			l = mid + 1;
		}
		else
		{
			r = mid + 1;

		}
	}

	return (-1);

}

