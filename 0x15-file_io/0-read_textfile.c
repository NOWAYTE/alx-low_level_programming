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
	int ptr;
	ssize_t read_n, write_n;
	char *buff = NULL;


	if (filename == NULL)
	{
		return (0);

	}

	ptr = open(filename, O_RDONLY);

	if (ptr == -1)
	{
		return (0);

	}
	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		return (0);

	}

	read_n = read(ptr, buff, letters);

	if (read_n == -1)
	{
		return (0);

	}

	write_n = write(STDOUT_FILENO, buff, read_n);

	if (write_n == -1)
	{
		return (0);

	}
	free(buff);

	close(ptr);

	return (read_n);

}






