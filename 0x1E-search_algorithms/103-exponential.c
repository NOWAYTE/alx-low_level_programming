#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: pointer to the first element of the array to search in
 * @left: the left index of the subarray to search in
 * @right: the right index of the subarray to search in
 * @value: the value to search for
 * Return: index where value is located, or -1 if not found
 */
int b_search(int *array, size_t left, size_t right, int value)
{
    size_t mid, i;

    if (array == NULL)
        return (-1);

    while (right >= left)
    {
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            if (i > left)
                printf(", ");
            printf("%d", array[i]);
        }
        printf("\n");

        mid = left + (right - left) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] > value)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using
 * exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: first index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t min;

    if (array == NULL || size == 0)
        return (-1);

    /* Find the range for binary search by repeated doubling */
    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    /* Calculate the range for binary search */
    min = (bound < size) ? bound : size - 1;
    printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, min);

    /* Perform binary search in the found range */
    return (b_search(array, bound / 2, min, value));
}

