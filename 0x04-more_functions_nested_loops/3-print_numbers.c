#include "holberton.h"
/**
 * print_numbers - prints to sdout
 *
 * Return: the result;
 */
void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
