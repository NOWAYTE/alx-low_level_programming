#include "main.h"
/**
 * argstostr - function that concatenates all the arguments
 *
 * @ac: integer parameter
 * @av: character pointer parameter
 *
 * Return: returns a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	char **ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * (ac));

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (ac)
	{
		for (i = 0; i < ac; i++)
		{
			ptr[i] = av[i];

			printf("%s\n", ptr[i]);

		}
		ptr = '\0';

	}

return ((char *)ptr);

}


