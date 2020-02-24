#include "holberton.h"

/**
 * *_memset - Fulfills with a char b for the n # bytes from *s direction
 * @s: pointer to the address where the arrays begins
 * @b: character with which to fill the space
 * @n: number of bytes to be filled
 * Return: the characters to be included
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
