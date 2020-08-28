#include "search_algos.h"

/**
 * jump_search - Search for a given value in an array
 * @array: Array header pointer.
 * @size: Array size.
 * @value: Value lo look for
 *
 * Return: -1 not present, index number if found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), front = 0, back = 0;

	if (array == NULL)
		return (-1);

	while (back < size)
	{
		if (array[front] >= value || back == size - 1)
		{
			back = front - jump;
			printf("Value found between indexes [%lu] and [%lu]\n", back, front);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", front, array[front]);
		back = front;
		front = front + jump;
	}
	while (back <= front && back < size)
	{
		printf("Value checked array[%lu] = [%d]\n", back, array[back]);
		if (array[back] == value)
			return (back);
		back++;
	}
	return (-1);
}
