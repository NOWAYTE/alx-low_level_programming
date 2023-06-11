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
	int i = 0;
	int x ;

	if (argc < 1)
	{
		printf("%d", i);
	}
	
	for (i = 0; i < argc; i++)
	{
		char  *endptr;

		if (strtol(argv[i], &endptr, 10) > 0)
		{
			x +=  atoi(argv[i]);

		}
		else
		{
			printf("Error");

			return (1);
		}
	}
	
	printf("%d", x);

	return (0);

	}	
