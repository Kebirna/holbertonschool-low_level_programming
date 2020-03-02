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
	int coins[] = {25, 10, 5, 2, 1};
	int i;
	int money_left;
	int coins_num;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (*argv[1] < 0)
	{
		printf("0\n");
		return (1);
	}

	money_left = atoi(argv[1]);
	i = 0;
	coins_num = 0;

	while (i < 5)
	{
		if (money_left % coins[i] == 0 && money_left != 0)
		{
			money_left -= coins[i];
			coins_num += 1;
			continue;
		}
	i++;
	}
	printf("%d\n", coins_num);
	return (0);
}
