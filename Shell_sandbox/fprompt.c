#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
/*#include "holberton.h"*/

char **parsing(char *buffer, int characters)
{
	char **token_necklace = malloc(sizeof(char *) * characters);
	char *token;
	char *delimiter = " :'\n''\t'";  //Review this behaivor 
	int counter = 0;

	/*spaces = count_spaces(buffer);*/
	/***token_necklace = malloc(sizeof(char *) * characters);*/
	if(token_necklace == NULL)
		printf("Error");
		/*return(NULL);*/
	token = strtok(buffer, delimiter);
	while(token != NULL)
	{
		token_necklace[counter] = strdup(token);
		token = strtok(NULL, delimiter);
		counter++;
	}
	token_necklace[counter] = token;
	return(token_necklace);
}

int main(int ac, char **av, char **env)
{
	char *buffer;
	size_t bufsiz;
	size_t characters;
	int counter;
	char *token;
	char **args;  // args[0]= /bin/ls args[1]="-l" 
	int status;
	

	while (1)
	{	
		pid_t pid = fork();
		if (!pid)
		{
			args = NULL;
			printf("$ ");
			characters = getline(&buffer, &bufsiz, stdin);
			args = parsing(buffer, characters);
			execve(args[0], args, NULL);
		}
		else
		{
			wait(&status);
		}	
	}
	
	return(0);
}
