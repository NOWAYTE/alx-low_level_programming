#include "main.h"
/**
 * is_prime_number - function that returns 1
 * @n: integer parameter
 *
 * Return: value;
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}

	return (is_prime_number_helper(n, 2));
}
/**
 * is_prime_number_helper - function that checks if prime
 * @a: integer parameter
 * @b: integer parameter
 *
 * Return: calls recursively
 */
int is_prime_number_helper(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else
	{
		if (a % b == 0)
		{
			return (0);
		}
	}

	return (is_prime_number_helper(a, b + 1));
}
