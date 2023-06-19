#ifndef DOG_H
#define DOG_H
#include<stdio.h>
#include<std.lib>
#include<string.h>

/**
 * struct - data type
 * @name - name
 * @age - age
 * @owner - owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, floar age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
