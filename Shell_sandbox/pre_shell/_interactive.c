#include "hsh.h"

int _interactive(char **av __attribute__((unused)))
{
	char *buffer = NULL;
	size_t bufsiz;
	char **args = NULL;
	char **env_args = NULL;
	char *tmp = NULL;
	int size;
	int size_args = 0;
	int i = 0;
	int j = 0;
	int flag = 0;
	int len = 0;
	loop = 0;

	while(1)
	{
		
		write(STDOUT_FILENO, "#cisfun$ ", 9);
		if (len = getline(&buffer, &bufsiz, stdin) != EOF)
		{	
			if (buffer[0] == 10)
				continue;
			
			size = necklace_pearls(buffer);
			args = parsing(buffer, size);

			if (strcmp(args[0], "exit") == 0)
			{
				freedom(args, size);
				exit(0);
			}
			/**TEAM DEVELOPMENT PLEASE TRY TO AVOID THIS FLAG CONDITION*/
			if (flag == 0)
			{
				env_args = getenvpath();
				flag = 1;
			}
			args[0] = _insert_path(args, env_args);
			execo(args);
			loop++;
			
		}
		else
		{
			write(STDOUT_FILENO, "\n", 1);
			break;
		}	
	}
	return (0);
}
