#include "holberton.h"

/**
 * binary_to_uint - Prints a int from binary
 * @b: String with the binary
 * Return: integer
 */

unsigned int binary_to_uint(const char *b)
{
	int counter;
	unsigned int binary;

	counter = 0;
	binary = 0;

	if (!b)
		return (0);

	while (b[counter])
	{
		if (b[counter] == '1')
		{
			binary = binary << 1;/*Binary moves to left*/
			binary = binary | 1;/*Adds the 1*/
		}
		else if (b[counter] == '0')
		{
			binary = binary << 1;/*Only moves*/
		}
		else
		{
			return (0);
		}
	counter++;
	}
return (binary);
}
