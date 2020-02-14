#include "holberton.h"
/**
 * print_diagonal - prints a diagonal
 * @n: input by the user
 * Return: a matrix
 */
void print_diagonal(int n)
{
	int y;
	int x;

	if (n > 0)
	{
		for (y = 0; x < n; y++)
		{
			for (x = 0; x < y; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}
}
