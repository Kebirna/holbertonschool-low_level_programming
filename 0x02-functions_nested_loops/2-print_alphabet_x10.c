#include "holberton.h"

/**
 * print_alphabet_x10 - uses the print_alphabet func
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int rank;
	int letter;

	rank = 0;

	while (rank < 10)
	{
		letter = 97;
		while (letter < 123)
		{
			_putchar(letter);
			letter++;
		}
		letter = 97;
		_putchar('\n');
		rank++;
	}
}
