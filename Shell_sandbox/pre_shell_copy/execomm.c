#include "hsh.h"

int execo(char **args)
{
	int status;
	pid_t pid = fork();

	if (!pid)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			printf("%s: command not found\n", args[0]);
			return (-1);
		}
	}
	else
	{
		wait(&status);
	}
	return (0);
}