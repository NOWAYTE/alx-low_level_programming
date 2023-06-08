#include "main.h"
/**
 * _sqrt_recursion - returns the number
 * @n: integer parameter
 *
 * Return: the value of the natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_function_helper(n, 0));
}
/**
 * _sqrt_function_helper - funds the squareroot number
 * @a: integer parameter
 * @b: integer parameter
 * Return: the recursive function
 *
 */

int _sqrt_function_helper(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	return (_sqrt_function_helper(a, b + 1));
}
