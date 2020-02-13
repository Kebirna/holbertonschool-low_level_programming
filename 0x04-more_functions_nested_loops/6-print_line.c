#include "holberton.h"
/**
 * print_line - prints n times _
 * @n: input by the user
 * Return: a matrix
 */
void print_line(int n)
{
	int i;

	i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
