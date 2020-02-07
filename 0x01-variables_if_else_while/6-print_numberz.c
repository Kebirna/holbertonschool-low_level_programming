#include <stdio.h>
/**
  * main - It prints 0-9 int
  * Return:0
  */
int main(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
	putchar(i);
	i++;
	}
	putchar('\n');
return (0);
}
