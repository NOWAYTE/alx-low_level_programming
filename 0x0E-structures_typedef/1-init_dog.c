#include "dog.h"
/**
 * init_dog - function that initialises cariable of type dog
 * @d: structure
 * @name: character pointer
 * @age: integer parameter
 * @owner: character pointer parameter
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

}
