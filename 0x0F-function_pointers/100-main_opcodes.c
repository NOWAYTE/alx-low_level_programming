#include "function_pointers.h"
/**
 * main - Entry to the program 
 *
 * @argc: argument count 
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned char x;
	int y;

	if (argc != 2)
	{

		printf("Error \n");
		exit(1);

	}

	i = atoi(argv[1]);

	x = (unsigned char*)main;

	for (y = 0; y < i; i ++)
	{
		printf("%02x", *(x + y));
	}

	return (0);
}



