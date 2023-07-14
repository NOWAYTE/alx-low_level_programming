#include "main.h"
/**
 * main - Entry to the program 
 *
 * @argc: argument count 
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 *
 */

int main( int argc, char  **argv)
{
	int file;
	ssize_t read_n;
	Elf64_Ehdr head;
	unsigned char elf_header[64];


	if (argc != 2)
	{
		printf("Usage: elf_header elf_filename \n");

		exit(98);

	}

	file = open(argv[1], O_RDONLY);

	if (file == -1)
	{
		printf("Erros: can't read file %s\n", argv[1]);

		exit(98);

	}

	read_n = read(file, &head, sizeof(head));

	if (read_n == -1)
	{
		close(file);

		printf("Error: can't read file %s \n", argv[1]);

		exit(98);

	}

	if (read_n != sizeof(head))
	{
		printf("Error: Not an ELF file %s", argv[1]);

		return(98);

	}
	printf("Magic: %x\n", elf_header[0]);
	printf("Class: %x\n", elf_header[1]);
	printf("Data: %x\n", elf_header[2]);
	printf("Version: %x\n", elf_header[3]);
	printf("OS/ABI: %x\n", elf_header[4]);
	printf("ABI Version: %x\n", elf_header[5]);
	printf("Type: %x\n", elf_header[6]);
	printf("Entry point address: %x\n", *(unsigned int *)(&elf_header[20]));

	close(file);

	return(0);

}

