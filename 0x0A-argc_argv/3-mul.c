#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry to the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (success)
 *
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int mul;

	if (argc < 1)
	{
		printf("Error");

		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);

	mul = x * y;

	printf("%d\n", mul);

	return (0);
}

