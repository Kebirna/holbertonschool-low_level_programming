#include "holberton.h"

/**
 * clear_bit - Changes the bit to 1 at a given position
 * @n: integer to work with
 * @index: index # where the bit to change is
 * Return: 1 if ok, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (!n)
		return (-1);

	num = 0 << index;/*Create a sequence with 1 at the index place*/

	*n = *n & num;

	return (1);
}
