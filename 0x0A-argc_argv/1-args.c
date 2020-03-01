#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the # of arguments passed to it
 * @argc: count the # of argument supplied to the program
 * @argv: Array of pointers to the strings which are the arguments
 * Return: none
 */

int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	(void)*argv;
	return (0);
}
