#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 *
 * @name: character pointer parameter
 * @f: function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
	{
		return;

	}
	else
	{
		f(name);

	}


}
