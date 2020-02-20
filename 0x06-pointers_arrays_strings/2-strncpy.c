#include "holberton.h"

/**
 * *_strncpy - copies two strings limiting by # of bytes
 * @dest: pointer to the destiny string
 * @src: pointer to the source string
 * @n: # of bytes to be used from src
 * Return: the concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
