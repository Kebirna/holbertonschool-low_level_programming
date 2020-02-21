#include "holberton.h"

/**
 * *string_toupper - changes lowercase to uppercase
 * @a: pointer to the string to be changed
 * Return: the character changed
 *
 */

char *string_toupper(char *a)
{
	int i;

	while (a[i] != '\0' && a[i] > 'a' && a[i] < 'z')
	{
		a[i] = a[i] - 32;
		i++;
	}
	return(a);
}
