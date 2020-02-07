#include <stdio.h>
#include <stdlib.h>
/**
  * main - It prints hexadecimal #
  * Return:0
  */
int main(void)
{
	int first;
	int second;

	for (first = 48; first <= 57; ++first)
	{
		for (second = 48; second <= 57; ++second)
		{
			putchar(first);
			putchar(second);
			if (first < 57 || second < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
return (0);
}
