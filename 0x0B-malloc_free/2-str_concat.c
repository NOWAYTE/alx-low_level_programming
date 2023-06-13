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
	char *ptr;
	char *array;
	int x = 0;
	int y = 0;
	int z = 0;
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		x = i + 1;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{

		y = i + 1;
	}
	z = x + y;

	ptr = malloc(sizeof(char) * z + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{

			ptr[i] = s1[i];
			array += ptr[i];
		}
		if (array == NULL)
		{
			return (ptr);
		}

		for (i = 0; s2[i] != '\0'; i++)
		{
			ptr[i + x] += s2[i];

			array += ptr[i + x];
		}

		if (array == NULL)
		{
			return ptr;
		}
	}

	return (ptr);
}
