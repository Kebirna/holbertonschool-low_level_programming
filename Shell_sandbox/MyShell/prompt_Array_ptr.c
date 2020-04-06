#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

char *tok_tok(char **string)
{
	const char delimiter[2] = " ";
	char *token;
	char *reservoir[5]; /*Array of pointers to tokens*/
	char **ptr_res;
	int counter;

	counter = 0;
	token = strtok(*string, delimiter);
	reservoir[counter] = token;
	counter++;
	while (token != NULL)
	{
		token = strtok(NULL, delimiter);
		reservoir[counter] = token;
		counter++;
	}
	reservoir[counter] = '\0';
	*ptr_res = &(*reservoir);
	/*Make sure to clean the rest of the array positions to NULL*/
	return(*ptr_res);
}

int print_tok(char *reservoir)
{
	int counter;

	counter = 0;

	while (*(reservoir + counter) != '\0')
	{
		/*printf("%s\n", ((*reservoir + counter)));Not working*/
		counter++;
	}
	return (0);
}

int main(char *input)
{
	char *buffer;
	size_t bufsiz;
	size_t characters;
	int counter;
	char *reservoir;

	counter = 0;
	bufsiz = 32;

	buffer = malloc(sizeof(char) * bufsiz);
	if (buffer == NULL)
	{
		return(-1);
	}

	while (counter == 0)
	{
		printf("$ ");
		characters = getline(&buffer, &bufsiz, stdin);
		if (characters != -1)
		{
			printf("%s\n", buffer);
			break;
		}
	}
	reservoir = tok_tok(&buffer);
	print_tok(reservoir);
	free(buffer);
	return(1);
}
