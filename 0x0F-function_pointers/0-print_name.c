#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - takes an input string and directs it to a named function
 * @name: input name
 * @f: pointer to the function inputed
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
