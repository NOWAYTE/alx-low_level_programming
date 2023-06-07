#include "main.h"
/**
 * _puts_recursion - a function that prints a string
 * main - Entry to the program
 *
 * _puts_recursion - A function that prints a string
 *
 * @s: a pointer to a character
 *
 *
 * return : Always 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);


		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');

	}
}
