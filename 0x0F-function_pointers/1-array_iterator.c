#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - loops in an array and sends each element to function
 * @array: name of the array to be proccessed
 * @size: size of the array
 * @action: pointer to the function to be activated
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;

	if (array && size && action)
	{
		counter = 0;
		while (counter <= size)
		{
			(*action) (array[counter]);
			counter++;
		}
	}
	else
		return;
}
