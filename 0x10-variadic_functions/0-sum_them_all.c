#include "variadic_functions.h"
/**
 * sum_them_all - A function that returns the sum
 * its parameters
 *
 * @n: number of parameters
 *
 * Return: returns the sum of parameter
 */
int sum_them_all(onst unsigned int n, ...)
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
		sum +=  va_arg(args , int);

	}

	va_end(args);

	return (sum);

}
		

	
