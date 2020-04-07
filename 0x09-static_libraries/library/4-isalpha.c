#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - checks if c is alphabetic
 *
 *Return: 1 if positive, else 0
 */

int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return(1);
	else
		return(0);
}		
