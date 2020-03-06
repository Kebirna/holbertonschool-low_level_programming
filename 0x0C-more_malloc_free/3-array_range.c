#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - create an array with the # between 2 points
 * @min: starting point (included in array)
 * @max: finishing point (included in array)
 *
 * Return: Pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int n;
	int range;

	if (min > max)
		return (NULL);
	range = (max - min) + 1;/* 10 - 0 = 10*/
	ptr = malloc(sizeof(int) * range);
	if (ptr == NULL)
		return (NULL);
	n = 0;
	while (min <= max)
	{
		ptr[n] = min;
		n++;
		min++;
	}
	return (ptr);
}
