#include "holberton.h"

/**
 * _puts - prints an string
 * @str: input string to print
 * Return: none
 */

void _puts(char *str)
{
	int pace;

	pace = 0;

	while (str[pace] != '\0')
	{
		_putchar(str[pace]);
		pace++;
	}
	_putchar('\n');
}
