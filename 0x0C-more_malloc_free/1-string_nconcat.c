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
	unsigned int i;
	unsigned int x = 0;
	unsigned int y;
	char *str;
	unsigned int len = 0;
	
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[len] != '\0') 
	{
		len++;
	}
	if (n >= len)
	{
		n = len;
	}
	y = x + len + 1;
	str = malloc(sizeof(char) * y);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < x; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		str[x + n] += s2[i];
	}

	return (str);
}	

