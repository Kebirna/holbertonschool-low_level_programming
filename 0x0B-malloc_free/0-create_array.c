#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array with dynamic memory allocation
 * @c: the character to be assigned
 * @size: the size of the memory to print
 *
 * Return: Pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * (sizeof(char)));

	if (ptr == NULL)
	{
	return (NULL);
	}

	while (i <= size)
	{
	ptr[i] = c;
	i++;
	}
	return (ptr);
}
