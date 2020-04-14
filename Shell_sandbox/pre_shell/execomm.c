#include "hsh.h"

int execo(char **args)
{
	char *cwd = getcwd(NULL, 0);
	int status;
	pid_t pid = fork();
	char buffer[33];
	char *error_message = NULL;
	char *looper = NULL;
	
	printf("%s\n", hsh_home);
	
	if (!pid)
	{
		if (execve(args[0], args, environ) == -1)
		{
			
			
			error_message =  strdup(cwd);
			looper = itoa(loop, buffer, 10);
			printf("%s\n", looper);
			/*error_message = strcat(error_message, buffer);*/

			 
			perror(error_message);
			printf(" Value of errno: %d\n ", errno);
			exit(1);
		}
	}
	else
	{
		wait(&status);
		
	}
	return (0);
}