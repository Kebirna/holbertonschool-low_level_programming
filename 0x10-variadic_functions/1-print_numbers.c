#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints argument ingresed separated by first argument
 * @separator: how the arguments to print will be separated
 * @...: ellipses
 * @n: quantity of args to be ingresed
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list my_list;

	va_start(my_list, n);

	if (separator == NULL)
		separator = "";

	for (counter = 0; counter < n; counter++)
	{
		if (counter != n - 1)
			printf("%d%s", va_arg(my_list, int), separator);
		else
			printf("%d\n", va_arg(my_list, int));
	}
	va_end(my_list);
}
