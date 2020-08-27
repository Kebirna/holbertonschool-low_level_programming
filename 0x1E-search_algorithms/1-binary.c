#include "search_algos.h"

/**
 * binary_search - Search for a given value in an array
 * @array: Array header pointer.
 * @size: Array size.
 * @value: Value lo look for
 *
 * Return: -1 not present, index number if found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t floor = 0, middle_index, ceiling = size - 1, half_distance;
	int middle_value = 0;

	if (array == NULL)
		return (-1);

	while (floor <= ceiling)
	{
		printf("Searching in array: ");
		print_array(array, floor, ceiling - 1);

		half_distance = (ceiling - floor) / 2;
		middle_index = floor + half_distance;
		middle_value = array[middle_index];
		if (middle_value == value)
			return (middle_index);
		if (middle_value > value) /*If target is at left side*/
			ceiling = middle_index - 1;
		else
			floor = middle_index + 1;
	}
	return (-1);
}

/**
 * print_array - prints an array
 * @array: pointer to the array
 * @floor: base index
 * @ceiling: top index
 */

void print_array(int *array, size_t floor, size_t ceiling)
{
	while (floor <= ceiling)
	{
		printf("%d, ", array[floor]);
		floor++;
	}
	printf("%d\n", array[floor]);
}
