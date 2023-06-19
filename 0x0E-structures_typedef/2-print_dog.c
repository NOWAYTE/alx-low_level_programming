#include "dog.h"
/**
 *  print_dog - a function that prints a dog
 * @d: struct of a dog
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		return;
	}

	if ((*d).name == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Name= %s ", (*d).name);
	}

	if ((*d).age == 0)
	{
		printf("nil\n");
	}
	else
	{
		printf("Age= %f", ((*d).age));
	}

	if ((*d).owner == NULL)
	{
		printf("nil\n");

	}
	else
	{
		printf("Owner= %s ", ((*d).owner));

	}

}
