#include "main.h"

/**
 * factorial - a function that return the factorial of a given number
 *
 * main - Entry to the program
 *
 * @n: this is the number from which we get the factorial
 *
 * Return: returns the value of the factorial
 *
 *
 */
int factorial(int n)
{
	int i;

	if (n < 0)
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
	i = n;

	return (i *= factorial(n - 1));
}
