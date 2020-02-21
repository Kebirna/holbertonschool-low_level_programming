#include "holberton.h"

/**
 * *_strcmp - compares two strings char by char
 * @s1: pointer to the string to be compared
 * @s2: pointer to the string to be comparing
 * Return: the result to 
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
