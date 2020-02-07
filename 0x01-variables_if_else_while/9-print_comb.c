#include <stdio.h>
#include <stdlib.h>
/**
  * main - It prints 0/9 with commas
  * Return:0
  */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
			putchar(44);
			putchar(32);
	i++;
	}
	putchar('\n');
return (0);
}
