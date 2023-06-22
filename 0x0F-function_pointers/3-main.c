#include "function_pointers.h"
#include "3-calc.h"
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
	char *i;
	int x;
	int y;

	if (argc)
	{
		x = atoi(argv[1]);
		i = argv[2];
		y = atoi(argv[3]);

	}
	printf("%d",get_op_func(i)(x, y));

	return (0);
}


