#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the names of aguments passed to it, including the name
 * @argc: count the # of argument supplied to the program
 * @argv: Array of pointers to the strings which are the arguments
 * Return: none
 */

int main(int argc, char *argv[])
{
	int count;

	count = 0;

	while (count < argc)
	{
	printf("%s\n", argv[count]);
	count++;
	}
	return (0);
}
