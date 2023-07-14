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
	printf("Magic: %dx\n", head.e_ident[EI_MAG0]);
	printf("Class: %x\n", head.e_ident[EI_CLASS]);
	printf("Data: %x\n", head.e_ident[EI_DATA]);
	printf("Version: %x\n", head.e_ident[EI_VERSION]);
	printf("OS/ABI: %x\n", head.e_ident[EI_OSABI]);
	printf("ABI Version: %x\n", head.e_ident[EI_ABIVERSION]);
	printf("Type: %x\n", head.e_type);
	printf("Entry point address: %ld\n", head.e_entry);

	close(file);

	return(0);

}

