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
	if ( n > 0 && n % n == 0)
	{
		return (1);
	}

	return (is_prime_number_helper(n, 0));
}
int is_prime_number_helper(int a, int b)
{
	if ( a % b == 0 && a == b)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return(is_prime_number_helper(a, b + 1));
}
