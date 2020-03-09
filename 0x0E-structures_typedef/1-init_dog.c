#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: the pointer to struct dog
 * @name: name input
 * @age: age input
 * @owner: owner input
 *
 * Return: Pointer to the new string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}

