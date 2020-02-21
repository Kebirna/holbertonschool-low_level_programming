#include "holberton.h"

/**
 * *_strcmp - compares two strings char by char
 * @s1: pointer to the string to be compared
 * @s2: pointer to the string to be comparing
 * Return: 0 if same, less or more than 0 if different
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int x;

	x = 0;

	while (x < n)
	{
		tmp = a[x];
		a[x] = a[n-1];
		a[n-1] = tmp;
		x++;
		n--;
	}
}
