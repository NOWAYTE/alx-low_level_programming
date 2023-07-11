#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 *
 * @filename: pointer to a file
 *
 * @letters: number of letters it should read
 *
 * Return: returns the actual number fo letters it could print
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *pt;
	size_t i;
	char c;

	FILE *ptr = NULL;

	if (filename == NULL)
	{
		return (0);
	}

	ptr = fopen(filename, "r");

	if (ptr == NULL)
	{
		return (0);
	}

	while ((c = fgetc(ptr)) != EOF && i < letters)
	{
		putchar(c);

		i++;

	}

	pt = malloc(sizeof(char) * letters);

	if (pt == NULL)
	{
		return (0);
	}

	while ((c = fgetc(ptr)) != EOF && i < letters)
	{
		write(STDOUT_FILENO, pt, 1);
	}

	free(pt);

	fclose(ptr);

	return (i);

}


