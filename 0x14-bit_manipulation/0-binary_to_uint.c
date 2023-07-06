#include "main.h"
/**
 * binary_to_uint - converts binary to number
 * @b: pointer to a string
 *
 * Return: returns the cionverted number
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int x = 0;

	if (!b)
	{
		return (0);
	}

	while (b[x] == '0' || b[x] == '1')
	{
		i <<= 1;
		i += b[i] - '0';

		x++;
	}

	return (i);

}




