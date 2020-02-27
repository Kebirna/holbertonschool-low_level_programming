#include "holberton.h"

/**
 * factorial - prints the factorial
 * @n: # to factorial
 * Return: integer with added # of chars
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	return (n * factorial(n - 1));
}
