#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root
 * @n: integer parameter
 *
 * Return: the value of the natural square
 */

int _sqrt_recursion(int n)
{
	if (n % 2 != 0)
	{
		return (-1);
	}
	else
       	{
		if (n == 0)
		{
			return (1);
		}
	}
	return (n /= _sqrt_recursion(n));
}
