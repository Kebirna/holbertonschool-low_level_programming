#include "holberton.h"

/**
 * *rot13 - Encodes a string to rot13
 * @a: pointer to the string to be changed
 * Return: the character changed
 *
 */

char *rot13(char *a)
{
	int i;
	int j;
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char door[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	i = 0;
	j = 0;

	while (a[i] != '\0')
	{
		while (door[j] != '\0')
		{
			if (door[j] == a[i])
			{
				a[i] = code[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (a);
}
