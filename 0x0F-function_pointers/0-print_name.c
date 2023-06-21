#include "function_pointers.c"
/**
 * print_name - a function that prints a name
 *
 * @name: character pointer parameter
 * @f: function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);

}
