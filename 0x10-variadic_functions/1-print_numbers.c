#include "variadic_functions.h"
/**
 * print_numbers - write a function that prints numbers
 *
 * @separator: is the string to be printed between numbers
 * @n: number of parameter
 *
 * Return: Always 0  (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;

	if (*separator == NULL)
	{
		printf(" ");
	}
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_args(args, int);

	}

	va_end(args);

}
