#include "main.h"
/**
 * _strlen_recursion - A function that returns the length of a string
 *
 * @s: a pointer to character
 *
 * main - Entry to the program
 *
 *
 * return: Always 0 (success)
 */

int i;

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		i++;

		_strlen_recursion(s + 1);
	}
  
       return (i);
}

