#include "main.h"
/**
 * set_bit - dets the value of a bit to 1
 *
 * @n: pointer to integer parameter
 * @index: refers to the index
 *
 * Return: returns 1 if works
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int n = sizeof(unsigned long int) * 8;

	if ( index >= n)
	{
		return (-1);

	}

	*n |= (1UL << index);


	return (1);



}


