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
	int x = 1;

	if (!b)
	{
		return (0);
	}

	while (*b)
	{
		if (x <= 32)
		{
			if (*b == '0' || *b == '1')
			{
				i <<= 1;
				i += b - '0';
			}

		}
		else
		{
			return (0);

		}


		b++;
		x++;

	}

	if (x > 32)
	{
		return (0);
	}

	return (i);

}




