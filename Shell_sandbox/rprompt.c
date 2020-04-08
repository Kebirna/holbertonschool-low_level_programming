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
			/*necklace_pearls(buffer);*/
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
