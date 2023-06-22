#include "variadic_functions.h"
/**
 * print_strings - A function that prints strings
 * @separator: strings to be printed btwn strings
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	char *let;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		let  = va_arg(args, char *);


		if (let == NULL)
		{
			printf("(nil)");
		}
		printf("%s", let);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}

	printf("\n");

	va_end(args);
}
