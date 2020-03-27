#include "holberton.h"

/**
 * set_bit - Changes the bit to 1 at a given position
 * @n: integer to work with
 * @index: index # where the bit to return is
 * Return: bit value at a given index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (!n)
		return (-1);

	num = 1 << index;/*Create a sequence with 1 at the index place*/

	*n = *n | num;

	return (1);
}
