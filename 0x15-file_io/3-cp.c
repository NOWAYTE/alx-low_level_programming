#include "main.h"
/**
 * main - Entry to the program 
 *
 * @argc: argument count 
 *
 * @argv: argument vector
 *
 * Return: Always 0 (success);
 *
 */

int main (int argc, char *argv[])
{
	int x;
	int y;
	size_t read_b;
	char z[1024];

	if (argc != 3)
	{

		dprintf(2, "Usage : cp file_from file_to \n");

		exit(97);

	}

	x = open(argv[1], O_RDONLY);

	if (x == -1)
	{
		dprintf(2, "Error : Can't read from file %s \n", argv[1]);

		exit(98);

	}

	y = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (y == -1)
	{

		dprintf(2, "Error: Can't write to file %s \n", argv[2]);

		exit(99);

	}

	read_b = read(x, z, sizeof(z));

	while (read_b)
	{
		write(x , z, read_b);

	}

	close(x);
	
	close(y);

	return (0);



}



