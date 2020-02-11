#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checks if c is lowercase
 *
 *Return: 1 if positive, else 0
 */

int _islower(int c)
{
	if (islower(c) > 0)
		return(1);
	else
		return(0);
}		
