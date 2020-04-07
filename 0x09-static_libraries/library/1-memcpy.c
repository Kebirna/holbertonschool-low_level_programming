#include "holberton.h"

/**
 * *_memcpy - copies from src to dest the #n of bytes
 *
 * @dest: memory space to be filled
 * @src: memory space to be copied
 * @n: number of bytes to be used
 *
 * Return: the copied memory space
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
