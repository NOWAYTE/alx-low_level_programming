#include "main.h"
/**
 * get_bit - function that returns the value
 * of a bit at a given index
 *
 * @n: integer parameter
 *
 * @index: refers to the index
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1UL << index))  !=  0)  ? 1  :  0;

}
