#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
/*#include "holberton.h"*/

int main(char *input)
{
	char *buffer;
	size_t bufsiz;
	size_t characters;
	int counter;
	char *token;
	char delimiter[2] = " ";

	

	while (1)
	{
		pid_t pid = fork();
		if (!pid)
		{
			counter = 0;		
			buffer = malloc(sizeof(char) * bufsiz);
			if (buffer == NULL)
			{
				return(-1);
			}
			printf("$ ");
			characters = getline(&buffer, &bufsiz, stdin);
			if (characters != -1)
			{
				printf("%s\n", buffer);
				/*break;*/
			}
			token = strtok(buffer, delimiter);
			while (token != NULL)
			{
				printf("Token %i is %s\n",counter, token);
				token = strtok(0, delimiter);
				counter++;
			}
			free(buffer);
		}
		else
		{
			wait(NULL);
		}	
	}
	
	return(0);
}
