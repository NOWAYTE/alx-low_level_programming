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
	int i;
	int **ptr;
	int len = 0;

	if (str == NULL || str  == "")
	{
		return (NULL);
	}
	
	for (i = 0; str[i] != '\0';  i++)
	{
		len ++;
	}
	len += 1;

	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	printf("%s\n",  ptr);

	return (ptr);




