#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - prints the absolute value of an int
 * @r: test integer
 * Return: 0;
 */

int _abs(int r)
{
	int absolute;

	absolute = abs(r);

	return (absolute);
	_putchar('\n');
}
