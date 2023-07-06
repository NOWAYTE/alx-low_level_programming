#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int
 *
 * @b: pointer to a string
 *
 * Return: returns the converted number
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		x <<= 1;
		x += b[i] - '0';


		i++;
	}

	return (x);

}

