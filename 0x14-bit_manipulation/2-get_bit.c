#include "holberton.h"

/**
 * get_bit - Prints the bit at a given position
 * @n: integer to work with
 * @index: index # where the bit to return is
 * Return: bit value at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int counter;

	counter = 0;
	if (!n)
		return (-1);

	while (counter < index)
	{
		if (n == 0)
			return (-1);
		n = n >> 1;
		counter++;
	}
return (n & 1);
}
