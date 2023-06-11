#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry to the program :
 *
 * @argc:Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc)
	{
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s", argv[i]);
			printf("\n");
		}
	}

	return (0);
}
