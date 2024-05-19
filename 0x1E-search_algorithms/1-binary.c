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

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");

		for (mid = l; mid < r; mid++)
		{
			printf("%d, ", array[mid]);
		}
		printf("%d \n", array[mid]);

		mid = l + (r - l) / 2;

		if (array[mid] == value)
		{
			return (mid);

		}
		if (array[mid] > value)
		{
			r = mid - 1;

		}
		else
		{
			l = mid + 1;

		}
	}

	return (-1);


}

