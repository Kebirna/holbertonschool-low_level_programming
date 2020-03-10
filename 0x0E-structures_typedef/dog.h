#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Keeps basic information about dogs
 * @name: Name of the dog
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: Simple dog information
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif /* DOG_H */
