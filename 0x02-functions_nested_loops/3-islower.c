#include "holberton.h"
/**
 * _islower - checks if c is lowercase
 * @c: character to test
 * Return: 1 if positive, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
