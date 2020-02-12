#include "holberton.h"
/**
 * _isalpha - checks if c is alphabetic.
 * @c: character to test.
 * Return: 1 if positive, else 0.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
