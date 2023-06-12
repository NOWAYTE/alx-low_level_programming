#include "main.h"
/**
 * _strdup - function that returns a newly allocated space
 * @str: character pointer parameter
 *
 * Return: Always 0 (success)
 */
char *_strdup(char *str)
{

	char *ptr = NULL;
	int i;
	int array;
	int x;
	char *mem = NULL;

	for (i = 0; ptr[i] != '\0'; i++)
	{

		array  = i + 1;
	}

	mem = malloc(sizeof(char) * array + 1);

	for (x = 0; i < array; i++)
	{
		mem[x] = ptr[x];
	}
	mem[array] = '\0';

	return (mem);
}
