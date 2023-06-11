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
	int j ;

	if (argc < 2)
	{
		printf("%d", i);
	}
	
	for (i = 0; i < argc; i++)
	{
		char  *ptr;

		long x = strtol(argv[i], &ptr, 10);

		if (*ptr == '\0')
		{
			j += x;
		}
		else
		{
		printf("Error");

		return (1);
		}
	}	
	
	printf("%d", j);

	return (0);	
}
