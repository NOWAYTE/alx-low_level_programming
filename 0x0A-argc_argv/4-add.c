#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * checker - check for non digit value
 * @arg: character parameter
 *
 * Return: return bool;
 */
int checker(char *arg)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (!isdigit(arg[i]))
		{
			return (0);
		}
	}

	return (1);
}
/**
 * main - Entry to the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int x = 0;
	int i;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 0; i < argc; i++)
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

