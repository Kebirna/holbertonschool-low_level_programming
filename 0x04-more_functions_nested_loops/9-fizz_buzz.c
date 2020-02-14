#include "holberton.h"
#include <stdio.h>
/**
 * main - prints fizz and buzz according to multiples of 5 and 3
 * Return: none
 */
int main(void)
{
	int x;
	int Vfiz;
	int Vbuz;

	for (x = 1; x < 101; x++)
{
	Vfiz = x % 3;
	Vbuz = x % 5;


	if (Vfiz == 0)
	{
		printf("Fizz ");
	}
	else if (Vbuz == 0 && x < 100)
	{
		printf("Buzz ");
	}
	else if (Vfiz == 0 && Vbuz == 0)
	{
		printf("FizzBuzz ");
	}
	else if (x == 100)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d ", x);
	}
}
putchar('\n');
return (0);
}
