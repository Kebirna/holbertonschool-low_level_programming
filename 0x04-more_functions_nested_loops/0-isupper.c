#include "holberton.h"
/**
 * _isupper - checks if c is upercase
 * @c: character to test
 * Return: 1 if positive, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
