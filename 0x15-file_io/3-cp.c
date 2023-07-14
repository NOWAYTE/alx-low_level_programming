#include "main.h"
/**
 * main - Entry to the program
 *
 * @argc - argument count 
 * @argv: argumnet vector
 *
 * Return: Always 0 (success)
 */

int main (int argc, char *argv[])
{
	int file_from;
	int file_to;
	ssize_t read_n;
	ssize_t write_n;

	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");

		exit (97);

	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s \n",  argv[1]);

		exit (98);

	}

	file_to =  open(argv[2], O_RDONLY | O_CREAT | O_TRUNC, 0664);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s \n ", argv[2]);

		exit(99);

	}

	read_n = read(file_to, buffer, 1024);

	if (read_n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s \n ", argv[1]);

		exit(99);

	}

	while(read_n > 0)
	{
		write_n = write(file_from, buffer, read_n);

		if (write_n == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s \n", argv[1]);

			close(file_from);

			close(file_to);

			exit(99);

		}

	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error can't close fd %d \n", file_to);
		
		exit(100);

	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error can't close fd %d  \n", file_from);

		exit(100);

	}


	return (0);

}

