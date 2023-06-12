#include "main.h"
/**
 * _strdup - function that returns a newly allocated space
 * @str: character pointer parameter
 *
 * Return: Always 0 (success)
 */
char *_strdup(char *str)
{

	char *ptr;
	int i;
	int array;
	int x;
	char *mem;

	for (i = 0; i != '\0'; i++)
	{
		ptr[i] = str;

		array  = i;
	}

	mem = malloc(sizeof(char) * array);

	for (x = 0; i < array; i++)
	{
		mem[x] = ptr[x];
	}

	return (&mem);
}
