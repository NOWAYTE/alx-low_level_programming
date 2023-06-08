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

int _strlen_recursion(char *s)
{ 

	if (*s == '\0')
	{
		return (0);

	}
	return (_strlen_recursion(s + 1) + 1);
 
       
}

