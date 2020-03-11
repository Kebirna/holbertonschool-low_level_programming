#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the struct memory
 * @d: the pointer to struct dog
 *
 * Return: none
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	}
	else
		return;
}
