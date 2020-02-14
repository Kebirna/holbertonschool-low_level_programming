#include "holberton.h"
/**
 * print_square - prints a square of size n
 * @size: size given by the user
 * Return: a square made of #
 */
void print_square(int size)
{
	int y;
	int x;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
