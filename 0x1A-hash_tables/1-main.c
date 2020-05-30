#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	char *s;

	s = "python";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Jennie";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "N";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	return (EXIT_SUCCESS);
}
