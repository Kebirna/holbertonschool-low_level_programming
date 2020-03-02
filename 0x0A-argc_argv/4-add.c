#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the result of a multiplication of two arguments
 * @argc: count the # of argument supplied to the program
 * @argv: Array of pointers to the strings which are the arguments
 * Return: none
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]) != 0)/*Not sure if isdigit works like this*/
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
