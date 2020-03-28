#include "holberton.h"

/**
 * flip_bits - Identifies the # of bits to be flipped to change #
 * @n: first # to compare
 * @m: second # to compare
 * Return: # of bits to be fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask;
	unsigned int count;

	mask = 0;
	count = 0;
	mask = n ^ m;
	/*printf("Mask is: %lu", mask);*/

	while (mask)
	{
		count += mask & 1;
		mask >>= 1;
	}
return (count);
}
