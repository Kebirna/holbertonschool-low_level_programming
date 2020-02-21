#include "holberton.h"

/**
 * reverse_array - swaps array
 * @a: pointer to the array to be swaped
 * @n: size of the array
 *
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int x;

	x = 0;

	while (x < n)
	{
		tmp = a[x];
		a[x] = a[n - 1];
		a[n - 1] = tmp;
		x++;
		n--;
	}
}
