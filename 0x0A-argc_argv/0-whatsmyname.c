#include<stdio.h>
/**
 * main -Entry to the program
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{

	if (argc)
	{
		printf("%d", argv[0]);
		printf("\n");
	}

	return (0);
}
