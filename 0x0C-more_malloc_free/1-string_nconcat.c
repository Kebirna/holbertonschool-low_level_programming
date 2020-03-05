#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings until the # of bytes
 * @s1: pointer to the string to copy
 * @s2: pointer to the 2nd string to copy
 * @n: # of bytes to be copied
 * Return: Pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l, size;
	char *ptr;

	i = j = k = l = 0;
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
	while (s2[j] != '\0' && j <= (n - 2))
	{
		j++;
	}
	size = j + i;
	ptr = malloc(size * (sizeof(char)));
	if (ptr == NULL)
		return (NULL);
	l = 0;
	while (k < i)
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
