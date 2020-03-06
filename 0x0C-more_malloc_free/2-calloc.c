#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - functions that allocates memory for an array & fills it with zero
 * @nmemb: # of units of memory to be allocated
 * @size: size of each unit to be allocated
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int total;
	int count;

	if (nmemb < 1 || size < 1)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	count = 0;
	while (count < total)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
