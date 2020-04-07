#include "holberton.h"

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
