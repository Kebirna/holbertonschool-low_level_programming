#include "holberton.h"

/**
 * *_memset - Fulfills with a char b for the n # bytes from *s direction
 * @s: pointer to the address where the arrays begins
 * @b: character with which to fill the space
 * @n: number of bytes to be filled
 * Return: the character *s to be included
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i; 

	i = 1;

	while (n > 0)
	{
		*(s + i) = b;
		n--;
		i++;
	}
	return (s);
}
