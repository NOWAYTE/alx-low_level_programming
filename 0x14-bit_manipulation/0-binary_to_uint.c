#include "main.h"
/**
 * binary_to_unit - converts binary to number 
 * @b - pointer to a string 
 *
 * Return: returns the cionverted number 
 *
 */

unsigned int binary_to_uint(const char *b)
{ 
	unsigned int i;

	if (!b)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);

		}

		i += (*b * 2) + (*b - '0');
		b++;
		

	}

	return (i);

}



		
