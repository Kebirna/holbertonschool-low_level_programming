#include "holberton.h"

/**
 * _pow_recursion - prints the power of x to y
 * @x: the number to be powered
 * @y: the power
 * Return: integer with the result of x power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
