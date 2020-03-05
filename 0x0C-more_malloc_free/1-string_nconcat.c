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
	unsigned int i = 0, j = 0, a = 0, b = 0, m = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;
	if (n >= j)
		n = j;
	else if (n == 0)
		j = 0;

	p = malloc((sizeof(char) * i + sizeof(char) * n + 1));
	if (p == NULL)
		return (NULL);
	for (; a <= i; a++)
		*(p + a) = *(s1 + a);
	for (b = i; b < (i + n); b++)
	{
		*(p + b) = *(s2 + m);
		m++;
	}
	*(p + b) = '\0';
	return (p);
}
