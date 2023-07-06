#include "main.h"
/**
 * flib_bits - function that returns the number of bits
 *
 * @n: integer parameter
 * @m: integer parameter
 *
 * Return: returns the number of bits
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	unsigned long int x = n ^ m;

	while (x)
	{

		i += x & 1;

		x >>= 1;

	}

	return (i);

}
