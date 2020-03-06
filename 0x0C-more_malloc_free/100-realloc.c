#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* _memcpy- function that copies the buffer
* @dest: direction that recieves the copy
* @src: directiont from where to copy
* Return: the buffer
* @n: int
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}

/**
 * *_realloc - function that reallocates memory
 * @ptr: initial array
 * @old_size: old size of the ptr
 * @new_size: new size to allocate the array
 * Return: array with the new allocation
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		free(ptr);
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	_memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}
