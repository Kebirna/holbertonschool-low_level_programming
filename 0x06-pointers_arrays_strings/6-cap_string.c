#include "holberton.h"

/**
 * *cap_string - capitalizes all words
 * @a: pointer to the string to be changed
 * Return: the character changed
 *
 */

char *cap_string(char *a)
{
	int i;
	int j;
	int clues[] = {32, 9, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125}; /* Not sure if is char o int*/

	i = 0; 
	j = 0;

	while (a[i] != '\0')
	{
		while (j < 14)
		{
			if (a[i] == clues[j] && a[i + 1] > 96 && a[i + 1] < 123)
			{
				a[i + 1] = a[i + 1] - 32;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (a);
}
