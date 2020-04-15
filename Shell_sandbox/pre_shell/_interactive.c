#include "hsh.h"

int _interactive(char **av __attribute__((unused)))
{
	char *buffer = NULL;
	size_t bufsiz;
	char **args = NULL;
	char **env_args = NULL;
	int (*b_func)() = NULL; /*Pointer to function for builtins*/
	int builtin_return = 0;
	int size;
	int flag = 0;

	while(1)
	{	
		write(STDOUT_FILENO, "$ ", 2);
		if (getline(&buffer, &bufsiz, stdin) != EOF)
		{
			if (buffer[0] == 10 || buffer[0] == 9)
				continue;

			size = necklace_pearls(buffer);
			args = parsing(buffer, size); /* From here we call the builtins */
			b_func = find_builtins(*args);
			if (b_func != NULL)
			{
				if (b_func == exit_func)
				{
					freedom(args, size);
					free(buffer);
				}
					builtin_return = b_func();
				/*
				if(strcmp(args[0], "exit") == 0 && builtin_return == 2)
					return(0);
				if(builtin_return == 0)
					continue;
				*/
			}
			/*
			if (strcmp(args[0], "exit") == 0)
			{
				
				exit(0);
			}
			/**TEAM DEVELOPMENT PLEASE TRY TO AVOID THIS FLAG CONDITION*/
			if (flag == 0)
			{
				env_args = getenvpath();
				flag = 1;
			}
			args[0] = _insert_path(args, env_args);
			errcode = execo(args);
			freedom(args, size);
			free(buffer);
			loop++;
		}
		else
		{
			write(STDOUT_FILENO, "\n", 1);
			break;
		}	
	}
	return(errcode);
}
