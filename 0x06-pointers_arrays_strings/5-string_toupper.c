#include "holberton.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @a: pointer to the string to be changed
 * Return: the character changed
 *
 */

char *string_toupper(char *a)
{
	int i;

	i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
		a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
