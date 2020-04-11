#include "hsh.h"

int execo(char **args)
{
	int status;
	char **path = NULL;
	char *tmp = NULL;

	path = _path();
	tmp = _insert_path(args, path);
	args[0] = tmp;
	pid_t pid = fork();

	if (!pid)
	{
		
		if(execve(args[0], args, NULL) == -1)
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
