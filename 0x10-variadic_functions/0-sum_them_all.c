#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - sums undetermined amount of variable input
 * @n: number of arguments passed
 * @...: ellipses
 * Return: the sum of the variables
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter;
	int sum;
	int res;
	va_list my_list;

	if (n == 0)
		return (0);

	va_start(my_list, n);

	for (counter = 0; counter < n; counter++)
	{
		sum += (va_arg(my_list, int)); /*may have prbl with this */
	}
	res = sum;
	sum = 0;
	va_end(my_list);

	return (res);
}
