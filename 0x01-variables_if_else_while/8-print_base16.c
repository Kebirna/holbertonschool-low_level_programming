#include <stdio.h>
/**
  * main - It prints 0-9 int
  * Return:0
  */
int main(void)
{
	int i;
	char l;

	i = '0';
	l = 'a';

	while (i <= '9')
	{
	putchar(i);
	i++;
	}
	
	while (l <= 'f')
	{
	putchar(l);
	l++;
	}
	
	putchar('\n');
return (0);
}
