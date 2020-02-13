#include "holberton.h"
/**
 * more_numbers - prints 10 times from 0 to 14
 *
 * Return: a matrix
 */
void more_numbers(void)
{
	int x;
	int y;
	int multi;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 15; x++)
		{
			multi = x * 1;
			if (multi > 9)
			{
				_putchar((multi / 10) + '0');
			}
			_putchar((multi % 10) + '0');
		}
	x = 0;
	_putchar('\n');
	}
}
