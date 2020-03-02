#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of a multiplication of two arguments
 * @argc: count the # of argument supplied to the program
 * @argv: Array of pointers to the strings which are the arguments
 * Return: none
 */

int main(int argc, char *argv[])
{
	int mult;
	int first;
	int second;


	if (argc == 3)
	{
	first = atoi(argv[1]);
	second = atoi(argv[2]);
	mult = first * second;
	printf("%d\n", mult);
	return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}
