#include "holberton.h"

/**
 * print_rev - prints an string in reverse
 * @s: input string to print reverse
 * Return: none
 */

void print_rev(char *s)
{
	int pace;
	int maxl;

	pace = 0;

	while (s[pace] != '\0')
	{
		pace++;
	}
	maxl = pace - 1;
	while (maxl >= 0)
	{
		_putchar(s[maxl]);
		maxl--;
	}
	_putchar('\n');
}
