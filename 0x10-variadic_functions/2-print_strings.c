#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings ingresed separated by first argument
 * @separator: how the arguments to print will be separated
 * @...: ellipses
 * @n: quantity of args to be ingresed
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list my_list;
	char * word; /*this is the airport for the strings in int */

	va_start(my_list, n);

	if (separator == NULL)
		separator = "";

	for (counter = 0; counter < n; counter++)
	{
		word = va_arg(my_list, char *);
		
		if (word == NULL)
			word = ("(nil)");
		printf("%s", word);

		if (counter != n - 1)
			printf("%s", separator);
		else
			printf("\n");
	}
	va_end(my_list);
}
