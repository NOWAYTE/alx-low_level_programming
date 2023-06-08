#include "main.h"
/**
 * is_palindrome - function that checks if strung is palindrome
 *
 * @s: pointer to character
 *
 * Return: returns a bool value
 *
 */
int is_palindrome(char *s)
{
	int i;

	i = char_array(s);

	return (is_palindrome_helper(s, 0, i - 1));

}
/**
 * is_palindrome_helper - checks for similarity
 * @a: integer parameter
 * @b: integer parameter
 * @s: pointer to character 
 * Return: calls itself recursively 
 */
int is_palindrome_helper(char *s, int a, int b)
{
	if (a >= b)
	{
		return (0);
	}
	else if (s[a] != s[b])
	{
		return (0);
	}

	return (is_palindrome_helper(s, a + 1, a - 1));
}
/**
 * char_array - return lenght
 * @s - pointer to character
 * Return : length
 */
int char_array(char *s)
{
	return length((s, 0));
}
/**
 * length - calculates the length
 * @s: character pointer
 * @i: integer parameter
 * Return: returns the length
 */
int length(char *s, int i)
{
	if (*s == '\0')
	{
		return (i);
	}
	return length((s + 1, i + 1));
}
