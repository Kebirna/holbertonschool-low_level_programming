#include <stdio.h>
/**
  *main - prints with printf the size of various types
  *Return: 0
  */
int main(void)
{
	int dchar;
	int dint;
	int dlongint;
	int dllint;
	int dfloat;

	dchar = sizeof(char);
	dint = sizeof(int);
	dlongint = sizeof(long int);
	dllint = sizeof(long long int);
	dfloat = sizeof(float);

	printf("Size of a char: %d byte(s)\n", dchar);
	printf("Size of an int: %d byte(s)\n", dint);
	printf("Size of a long int: %d byte(s)\n", dlongint);
	printf("Size of a long long int: %d byte(s)\n", dllint);
	printf("Size of a float: %d byte(s)\n", dfloat);
	return (0);
}
