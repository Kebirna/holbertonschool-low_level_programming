#include "holberton.h"

/**
 * puts2 - prints every other number
 * @str: input string to print
 * Return: none
 */

void puts2(char *str)
{
	int pace;

	pace = 0;

	while (str[pace] != '\0')
	{
		_putchar(str[pace]);

		if (pace <= 8)
		{
		pace += 2;
		}
	}

	_putchar('\n');
}
