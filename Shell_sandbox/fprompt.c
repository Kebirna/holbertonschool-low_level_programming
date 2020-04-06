#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
/*#include "holberton.h"*/


int main(int ac, char **av, char **env)
{
	char *buffer;
	size_t bufsiz;
	size_t characters;
	int counter;
	char *token;
	char delimiter[2] = " ";
	char **args;  // args[0]= /bin/ls args[1]="-l" 

	

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
			wait(NULL);
		}	
	}
	
	return(0);
}
