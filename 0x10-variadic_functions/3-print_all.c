#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @formar: format of input
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;

	char x;
	char *let;

	va_start(args, format);

	while(format[i])
	{
		x = format[i];

		switch (x)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				let = va_arg(args, char*);

				if (let == NULL)
				{
					printf("(nil)");

				}
				break;

		}

		i++;

	}
	printf("\n");
	va_end(args);

}


