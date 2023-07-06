#include "main.h"
/**
 * clear_bit - a function that sets the value of 
 * a bit to 0
 *
 * @n: pointer to integer parameter
 *
 * @index: refers to the index
 *
 * Return: returns 1 if it worked 
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = sizeof(unsigned long int) * 8;


	if (index >= x)
	{
		return (-1);

	}


	*n &= ~(1UL << index);

	return (1);

}
