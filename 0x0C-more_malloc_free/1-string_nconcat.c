#include "main.h"
/**
 * string_nconcat -  function that concatenates twon strings
 *
 * @s1: character pointer parameter
 * @s2: character pointer parameter
 * @n: integer parameter 
 *
 * Return: returns the value of newly allocated space
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int x = 0;
	int y;
	char *str;
	int len;
	
	while (s1[x] != '\0')
	{
		str[x] = s1[x];
		x++;
	}
	while (s2[i] != (n + 1)) 
	{
		str[i] += s2[i];
		len++;
	}
	len++;

	if (n >= len)
	{
		for (y = 0; s2[i] != (n + 1); y++)
		{
			str[y] += s2[y];
		}
	}

	return (str);
}	

