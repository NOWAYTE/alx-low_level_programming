#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 *
 * @*filename  - pointer to a file 
 *
 * @letters - number of letters it should read
 *
 * Return: returns the actual number fo letters it could print
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t read;
	char c;
	char cha;

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

	while (c = fgetc(ptr) != EOF)
	{
		cha = fgetc(c);

	}

	fclose(ptr);

	return (cha);

}


