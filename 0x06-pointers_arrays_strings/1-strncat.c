#include "holberton.h"

/**
 * *_strncat - concatenates two strings limiting by # of bytes
 * @dest: pointer to the destiny string
 * @src: pointer to the source string
 * @n: # of bytes to be used from src
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i;

	j = 0;
	i = 0;

	if (n > 7)
	{
		n = 7;
	}

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
		{
			dest[i] = src[j];
		i++;
		j++;
	}
	if (src[j] < n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
