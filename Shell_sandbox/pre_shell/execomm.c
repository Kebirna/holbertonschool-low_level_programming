#include "hsh.h"

int execo(char **args)
{
	
	int status;
	pid_t pid = fork();
	char buffer[33];
	char *error_message = malloc(sizeof(char) * 255);
	char *looper = NULL;
	
	
	if (!pid)
	{
		

		if (execve(args[0], args, environ) == -1)
		{
			
			

			looper = itoa(loop, buffer, 10);
			error_message =  strdup(hsh_home);
			error_message =  strcat(error_message, ": ");
			error_message =  strcat(error_message, looper);
			error_message =  strcat(error_message, ": ");
			error_message =  strcat(error_message, args[0]);
			int errcode =  errno;
			perror(error_message);
			free(error_message);
			exit(errcode);
		}

	}
	else
	{
		wait(&status);
		
	}
	free(error_message);
	errcode = 0;
	return (errcode);
}
