#include "hsh.h"

int execo(char **args)
{
	int status;
	pid_t pid = fork();

	
	if (!pid)
	{
		if (execve(args[0], args, environ) == -1)
		{
			printf(" Value of errno: %d\n ", errno); 
			perror("%s %d");
			exit(1);
		}
	}
	else
	{
		wait(&status);
		
	}
	return (0);
}