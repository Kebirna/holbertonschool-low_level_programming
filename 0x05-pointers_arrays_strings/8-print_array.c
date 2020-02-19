#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: pointer to the array
 * @n: size of the array
 * Return: none
 */

void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		if (l == n - 1)
			printf("%d", a[l]);
		else
			printf("%d, ", a[l]);
	}
	printf("\n");
}
