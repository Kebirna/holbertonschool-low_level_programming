#include "holberton.h"

/**
 * xmove - find square root of n
 * @x: integer value (sqrt)
 * @n: integer value
 * Return: square root)
 */
int xmove(int x, int n)
{
	if ((x * x) == n)
	{
		return (x);
	}
	else if ((x * x) > n)
	{
		return (-1);
	}
	else
	{
		return (xmove((x + 1), n));
	}
}
/**
 * _sqrt_recursion - Returns the square root of a #
 * @n: number to calculate square root
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int result, x = 0;

	if (n > 0)
	{
		result = xmove(x, n);
		return (result);
	}
	else
	{
		return (-1);
	}
}
