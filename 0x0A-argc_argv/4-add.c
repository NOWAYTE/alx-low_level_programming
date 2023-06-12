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
		x += atoi(argv[i]);
	}

	printf("%d\n", x);

	return (0);

}	

