#include "main.h"
/**
 * binary_to_unit - converts binary to number 
 * @b - pointer to a string 
 *
 * Return: returns the cionverted number 
 *
 */

unsigned int binary_to_unit(const char *b)
{ 
	int i;

	unsigned int x;

	if (!b)
	{
		return (0);
	}

	while (*b[i])
	{
		if (*b[i] != '0' && b[i] != '1')
		{
			return (0);

		}

		i = (*b -'0') * 2 + (*b++);
		i++;

	}

	return (i);

}



		
