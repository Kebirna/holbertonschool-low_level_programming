#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
int _strlen(char *s);
char *_strncpy(char *dest, char *src);

/**
 * new_dog - creates a new instance for dog_t & saves name & owner
 * @name: pointer to name input
 * @age: integer input
 * @owner: pointer to owner input
 *
 * Return: pointer to dog_t struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bulldog;
	char *name_copy;
	char *owner_copy;

	bulldog = malloc(sizeof(dog_t));
	if (bulldog == NULL)
		return (NULL);

	name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
	if (name_copy == NULL)
	{
		free(bulldog);
		return (NULL);
	}
	owner_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (owner_copy == NULL)
	{
		free(bulldog);
		free(name_copy);
		return (NULL);
	}

	_strncpy(name_copy, name);
	_strncpy(owner_copy, owner);

	(*bulldog).name = name;
	(*bulldog).age = age;
	(*bulldog).owner = owner;

	return (bulldog);
}

/**
 * _strlen - counts how many chars a string has
 * @s: input pointer
 * Return: # of chars a string has before '\0'
 */

int _strlen(char *s)
{
	int letters;

	while (*s != '\0')
	{
		s++;
		letters++;
	}

	return (letters);
}

/**
 * *_strncpy - copies two strings limiting by # of bytes
 * @dest: pointer to the destiny string
 * @src: pointer to the source string
 * Return: the concatenated string
 */

char *_strncpy(char *dest, char *src)
{

	int i;

	for (i = 0; i != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i == '\0'; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
