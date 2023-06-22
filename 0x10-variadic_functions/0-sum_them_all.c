#include "variadic_functions.h"
/**
 *
 * sum_them_all - A function that returns the sum
 * of all its parameters
 *
 * @n: number of parameter
 *
 * Return: returns the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum +=  va_arg(args, int);

	}

	va_end(args);

	return (sum)
}
