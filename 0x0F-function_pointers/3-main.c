#include "function_pointers.c"
#include "calc.h"
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
	int x;
	int y;

	if (argc)
	{
		x = atoi(argv[1]);
		i = atoi(argv[2]);
		y = atoi(argv[3]);

	}

	*get_op_func(i)(x, y);

	return (0);
}


