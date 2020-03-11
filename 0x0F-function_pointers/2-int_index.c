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

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;
	int pre_result;


	if(size <= 0)
		return(-1);

	if(array && cmp)
	{
		counter = 0;

		while(counter <=size)
		{
			pre_result =(*cmp) (array[counter]);
			if(pre_result != 0)
					return(counter);
			counter++;
		}
		return(-1);
	}
	else
	exit(1);
}
