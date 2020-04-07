#include "holberton.h"

/**
 * _strspn - Counts in the initial segment of one string the chars of the other
 * @s: pointer to the string
 * @accept: the string to be matched and counted
 *
 * Return: the # if times there were coincence
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int metric;
	int x;
	int y;

	x = 0;
	y = 0;
	metric = 0;

	while (s[x] != '\0' && s[x] != 32)
	{
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				metric += 1;
			}
			y++;
		}
		x++;
		y = 0;
	}
	return (metric);
}
