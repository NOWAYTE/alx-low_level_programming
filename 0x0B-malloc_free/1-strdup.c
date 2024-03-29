#include "main.h"
/**
 * _strdup - function that returns a newly allocated space
 * @str: character pointer parameter
 *
 * Return: Always 0 (success)
 */
char *_strdup(char *str)
{
	int i;
	int array = 0;
	int x;
	char *mem;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{

		array  = i + 1;
	}

	mem = malloc(sizeof(char) * array + 1);
	if (mem == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < array; x++)
	{
		mem[x] = str[x];
	}
	mem[array] = '\0';

	return (mem);
}
