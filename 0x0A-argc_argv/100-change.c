#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry to the program 
 *
 * @argc: Argument count 
 * @arv: Argument vector 
 *
 * Return - Always 0 (succes)
 *
 */
int main(int argc, char *argv[])
{
	int r;
	int y = 0;

	if (argc != 1)
	{
		printf("Error");
		printf("\n");

		return (1);

	}
	
	r = atoi(argv[1]);

	if (r < 0)
	{
		printf("0\n");

		return (0);
	}

	y += r/25;
	r %= 25;
	y += r/10;
	r %= 10;
	y += r/5;
	r %= 5;
	y += r/2;
	r %= 2;

	y += r;

	printf("%d\n", y);

	return (0);
}
