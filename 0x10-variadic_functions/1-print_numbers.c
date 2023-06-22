#include "variadic_functions.h"
/**
 * print_numbers - write a function that prints numbers
 *
 * @separator: is the string to be printed between numbers
 * @n: number of parameter
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (*separator == NULL)
	{
		printf(" ");
	}
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		printf("%s", separator);


	}

	printf("\n");

	va_end(args);

}
