#include "holberton.h"

/**
 * puts_half - prints second half of a string
 * @str: input string to print
 * Return: none
 */

void puts_half(char *str)
{
	int pace;
	int finalpace;
	int i;

	pace = 0;

	while (*(str + pace) != 0)
	{
		pace++;
	}
	pace--;
	if (pace % 2 == 0)
	{
		finalpace = pace / 2;
	}
	else
	{
		finalpace = (pace - 1) / 2;
	}
	for (i = finalpace + 1; i <= pace; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
