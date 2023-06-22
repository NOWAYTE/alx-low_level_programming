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
	int y;
	unsigned char *op;
	void *ma;

	if (argc != 2)
	{

		printf("Error \n");
		exit(1);

	}

	i = atoi(argv[1]);

	ma = main;
	op = (unsigned char *)ma;


	for (y = 0; y < i; y ++)
	{
		printf("%02x", op[y]);
	}

	printf("\n");

	return (0);
}



