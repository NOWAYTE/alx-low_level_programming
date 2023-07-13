#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 *
 * @filename: pointer to a file
 *
 * @letters: number of letters it should read
 *
 * Return: returns the actual number of letters
 * it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr = NULL;
	size_t read_n, write_n;
	char *buff = NULL;


	if (filename == NULL)
	{
		return (0);

	}

	ptr = fopen(filename, "r");

	if (ptr == NULL)
	{
		return (0);

	}
	buff = malloc(sizeof(char) * letters + 1);

	read_n = fread(buff, 1, letters, ptr);

	if (read_n != 1)
	{
		return (0);

	}

	write_n = write(STDOUT_FILENO, buff, 1);

	if (write_n != 1)
	{
		return (0);

	}

	return (read_n);

}






