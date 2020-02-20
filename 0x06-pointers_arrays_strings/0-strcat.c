#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to the destiny string
 * @src: pointer to the source string
 * Return: none
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	j = 0;
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return(dest);
}
