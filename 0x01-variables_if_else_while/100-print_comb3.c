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

	for (first = 48; first <= 56; ++first)
	{
		for (second = first + 1; second <= 57; ++second)
		{
			putchar(first);
			putchar(second);

		if (first != 56)
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
return (0);
}
