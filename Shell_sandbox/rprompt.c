#include "hsh.h"

int main(int ac, char **av, char **env)
{
	char *buffer = NULL;
	size_t bufsiz;
	size_t characters;
	int counter;
	char *token = NULL;
	char **args = NULL;
	int status;
	int exec_err = 0;

	while (1)
	{	
		pid_t pid = fork();
		if (!pid)
		{
			
			args = NULL;
			printf("$ ");
			characters = getline(&buffer, &bufsiz, stdin);
			args = parsing(buffer, characters);
			exec_err = execve(args[0], args, NULL);
			if (exec_err == -1)
				printf("%s: command not found\n", args[0]);
		}
		else
		{
			wait(&status);
		}	
	}
	
	return(0);
}
