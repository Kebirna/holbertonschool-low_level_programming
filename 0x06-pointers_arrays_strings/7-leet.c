#include "holberton.h"

/**
 * *leet - Encodes a string to 1337
 * @a: pointer to the string to be changed
 * Return: the character changed
 *
 */

char *leet(char *a)
{
	int i;
	int j;
	char code[] = "4433007711";
	int door[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};

	i = 0;
	j = 0;

	while (a[i] != '\0')
	{
		while (j < 10)
		{
			if (door[j] == a[i])
			{
				a[i] = code[j];
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (a);
}
