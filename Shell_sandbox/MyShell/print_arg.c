#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int counter;

	counter = 0;

	while (argv[counter] != '\0')
	{
		printf("%s ", argv[counter]);
		counter++;
	}
	putchar('\n');

	return(0);
}
