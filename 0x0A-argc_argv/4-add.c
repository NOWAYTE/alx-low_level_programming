#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry to the program 
 *
 * @argc: Argument count 
 * @argv: Argument vector
 *
 * Return: ALways 0 (sucess)
 */
int main(int argc, char * argv[])
{
	int x;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (int i = 1; i < argc; i++)
	{
		char *ptr;
		int i = strtol(argv[i], &ptr, 10);

		if (*ptr != '\0')
		{
			printf("Error");

			return (1);
		}

		x += i;
	}

	printf("%d\n", x);

	return (0);

}	

