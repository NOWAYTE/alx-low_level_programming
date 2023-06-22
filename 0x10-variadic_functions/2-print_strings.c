#include "variadic_functions.h"
/**
 * print_strings - A function that prints strings
 * @separator: strings to be printed btwn strings
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(args, char*) == NULL)
		{
			printf("nil");
		}
		printf("%s", va_arg(args, char*));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}

	printf("\n");

	va_end(args);
}
