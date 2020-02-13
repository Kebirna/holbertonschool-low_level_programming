#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all the number from n to 98
 *
 * Return: string with the numbers
 */

void print_to_98(int n)
{
	int m;

	m = n;

	if (m > 98)
	{
		for (; m >= 98; m--)
		{
			if (m == 98)
			{
				printf("%d yeah \n", m);
			}
			else
			{
				printf("%d, neah ", m);
			}
		}
	}
	else if (m < 98)
	{
		for (; m <= 98; n++)
		{
			if (m == 98)
			{
				printf("%d yuju \n", m);
			}
			else
			{
				printf("%d, ayay ", m);
			}
		}
	}
	else
	{
		printf("%d mama mia \n", m);
	}
}
