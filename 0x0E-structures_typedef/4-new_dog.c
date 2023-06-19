#include "dog.h"
/**
 *new_dog - function that takes three arguments
 * and returns pointer to a dog_t structure
 *
 * @name: name of the new dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: returns the address of the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
	{
		return (NULL);
	}

	(*n_dog).name = strdup(name);


	if ((*n_dog).name == NULL)
	{
		free((*n_dog).name);

	}

	(*n_dog).age = age;

	(*n_dog).owner = strdup(owner);


	if ((*n_dog).owner == NULL)
	{
		free((*n_dog).owner);

	}

	return (n_dog);
}
