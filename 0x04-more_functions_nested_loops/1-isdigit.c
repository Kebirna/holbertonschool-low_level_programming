#include "holberton.h"
/**
 * _isdigit - checks if c is digit between 0 and 9
 * @c: character to test
 * Return: 1 if positive, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
