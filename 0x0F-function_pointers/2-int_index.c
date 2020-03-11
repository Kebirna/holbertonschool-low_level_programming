#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - points to different functions to use their resultsn
 * @array: name of the array to be proccessed
 * @size: size of the array
 * @cmp: pointer to the function to be activated
 * Return: index # for success, -1 for error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		counter = 0;

		while (counter < size)
		{
			if (cmp(array[counter]))
				return (counter);
			counter++;
		}
	}
	return (-1);
}
