#include <stdio.h>
#include <stdlib.h>
/**
  * main - It prints mix of #
  * Return:0
  */
int main(void)
{
	int first;
	int second;
	int third;

	for (first = 48; first <= 56; ++first)
	{
		for (second = first + 1; second <= 57; ++second)
		{
			for (third = second + 1; third <= 57; ++third)
			{
			putchar(first);
			putchar(second);
			putchar(third);
		
		if (first != 7 || second != 8 || third != 9)

			putchar(44);
			putchar(32);
			}
		}
	}
	putchar('\n');
return (0);
}
