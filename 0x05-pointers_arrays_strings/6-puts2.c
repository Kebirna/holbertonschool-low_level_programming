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
		if (pace % 2 == 0)
		{
		_putchar(str[pace]);
		}
		pace++;
	}
	_putchar('\n');
}
