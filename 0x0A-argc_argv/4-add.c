#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry to the program 
 *
 * @argc: Argument count 
 * @argv: Argumeny vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}

	for (int i = 1; i < argc; i++)
	{
		char *ptr;

		int r = strtol(argv[i], &ptr, 10);

		if (*ptr != '\0')
		{
			printf("Error");

			return (1);
		}

		x += r;

	}

	printf("%d", x);

	return (0);


}	
