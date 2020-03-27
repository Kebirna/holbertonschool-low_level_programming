#include "holberton.h"

/**
 * print_binary - Prints a binary from int
 * @n: String with the binary
 * Return: integer
 */

void print_binary(unsigned long int n)
{
	if (!n)
		_putchar ('0');

	recursion(n);
}

/**
 * recursion - Prints the int in binary
 * @n: Integer
 * Return: Void
 */

void recursion(unsigned long int n)
{
	if (n == 0)
		return;
	recursion(n >> 1);
	_putchar((n & 1) + '0');
}
