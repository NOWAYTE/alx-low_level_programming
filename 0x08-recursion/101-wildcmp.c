#include "main.h"
/**
 * wildcmp - compares twon strings
 * @s1: pointer to character
 * @s2: pointer to character
 *
 * Return: Always 0 (success)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else
	{
		if ( *s1 == *s2)
		{
			return (wildcmp(s1 + 1, s2 + 2));

		}
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) != '\0' )
		{
			return (0);
		}
		if (*s1 == '\0')
		{
			return (0);
		}
	}
	else
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}

	return (0);
}

	

