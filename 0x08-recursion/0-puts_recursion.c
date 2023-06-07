#include "main.h"
/**
 * main - Entry to the program
 * _puts_recusrion -Function that prints a string followed by a new line
 *
 * return: Always 0 (success)
 *
 */
void _puts_recursion(char *s)
{
	if ( *s == NULL)
	{
		return;
	}else{
		_putchar(*s);
		_putchar(*s + 1);
		_putchar('\n');

	}
}
