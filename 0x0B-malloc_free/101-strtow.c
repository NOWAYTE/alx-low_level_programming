#include "main.h"
/**
 * strtow - function that splits a string into words
 *
 * @str:character pointer parameter
 *
 * Return: returns pointer to an array of strings
 */
char **strtow(char *str)
{
	int i = 0;
	char **string;
	int length = 0;
	char *s;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	for (s = str; *s != '\0'; s++)
	{
		if (*s == ' ')
		{
			length ++;
		}
	}
	length ++;

	string = malloc(sizeof(char *) * length);

	if (string  == NULL)
	{
		return (NULL);
	}

	for (s = str; *s != '\0'; s++)
	{
		if (*s == ' ')
		{
			string[i++] = s + 1;
		}
	}

	string[i] = NULL;

	return (string);



}




