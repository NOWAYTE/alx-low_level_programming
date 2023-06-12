#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - Entry to the program 
 *
 * @argc: Argument count 
 * @argv: Argument vector
 *
 * Return: ALways 0 (sucess)
 */
int checker(char *arg)
{
	for (int i = 0; i != '\0'; i++)
	{
		if(!isdigit(arg[i]))
		{
			return (0);
		}
	}

	return (1);
}

int main(int argc, char * argv[])
{
	int x = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (int i = 0; i < argc; i++)
	{
		if (checker(argv[i]))
		{
			x += strtol(argv[i], NULL, 10);
		}

		else
		{
			printf("Error");

			return (1);
		}
	}

	printf("%d\n", x);

	return (0);

}	

