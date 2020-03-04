#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copies an string into a new memory allocation
 * @str: the pointer to the string to copy
 *
 * Return: Pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int size;
	int l;
	char *ptr;

	i = 0;
	j = 0;
	k = 0;

	if (s1 == NULL)
	{
		s1 = malloc(1 * (sizeof(char)));
		s1[0] = '\0';
	}

	if (s2 == NULL)
	{
		s2 = malloc(1 * (sizeof(char)));
		s2[0] = '\0';
	}

	while (s1[i] != '\0')
	{
		i++;
	}
	if (i != 0)
	i--;

	while (s2[j] != '\0')
	{
		j++;
	}
	size = j + i;

	ptr = malloc(size * (sizeof(char)));
	if (ptr == NULL)
	{
		return (NULL);
	}

	l = 0;

	while (k <= i)
	{
		ptr[k] = s1[k];
			k++;
	}
	while (k <= size)
	{
		ptr[k] = s2[l];
		k++;
		l++;
	}
	return (ptr);
}
