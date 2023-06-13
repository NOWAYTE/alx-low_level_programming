#include "main.h"
/**
 * str_concat - function that concatenates two strings 
 * @s1: character pointer parameter 
 * @s2: pointer to a character parameter
 *
 * Return: return pointer to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *str_1 = NULL;
	char *str_2 = NULL;
	char *ptr;
	int x = 0;
	int y = 0;
	int z = 0;
	int i;

	for (i = 0; i != '\0'; i++)
	{
		str_1[i] = *s1;

		x = i;
	}
	
	for (i = 0; i != '\0'; i++)
	{
		str_2[i] = *s2;
		
		y = i;
	}
	z = x + y;

	ptr = malloc(sizeof(char) * z + 1);
	
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i != '\0'; i++)
		{
			ptr[i] = str_1[i];
		}

		for (i = 0; i!= '\0'; i++)
		{
			ptr[i] += str_2[i];
		}
	}

	return (ptr);
}
