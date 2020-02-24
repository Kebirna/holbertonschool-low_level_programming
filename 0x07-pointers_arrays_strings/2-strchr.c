#include "holberton.h"

/**
 * *_strchr - Locates a char in a string
 * @s: pointer to the string
 * @c: char to be found
 * @l:
 * Return: c or null
 */

char *_strchr(char *s, char c)
{
	int l;

	for (l = 0; s[l]; l++)
	{
		if (s[l] == c)
			return (s + l);
	}
	if (s[l] == c)
		return (s + l);

	return ('\0');
}
