#include "holberton.h"

/**
 * _strlen_recursion - prints a string in reverse
 * @s: string input
 * Return: integer with added # of chars
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (0);
	}
	n = _strlen_recursion(s + 1);
	return (1 + n);
}
