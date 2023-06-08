#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input integer is a prime number
 * @n - integer parameter
 *
 * Return: value;
 */
int is_prime_number_helper(int a, int b);
int is_prime_number(int n)
{
	if ( n <= 0)
	{
		return (0);
	}

	return (is_prime_number_helper(n, 2));
}
int is_prime_number_helper(int a, int b)
{
	if (a % b == 0)
	{
		return (0);
	}
	else
       	{
		if (a == b)
		{
			return (1);
		}
	}

	return(is_prime_number_helper(a, b + 1));
}
