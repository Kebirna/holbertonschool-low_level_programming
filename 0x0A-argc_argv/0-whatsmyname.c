#include "holberton.h"
#include <stdio.h>

/**
 * main - prints a string with the name of itself
 * @argc: count the # of argument supplied to the program
 * @argv: Array of pointers to the strings which are the arguments
 * Return: none
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return(0);
}
