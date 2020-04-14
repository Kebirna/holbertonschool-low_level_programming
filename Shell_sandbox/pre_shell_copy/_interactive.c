#include "hsh.h"

int _interactive(char **av __attribute__((unused)))
{
	char *buffer = NULL;
	size_t bufsiz;
	char **args = NULL;
	char **env_args = NULL;
	char *tmp = NULL;
	int (*b_func)() = NULL; /*Pointer to function for builtins*/
	int builtin_return = 0;
	int size;
	int size_args = 0;
	int i = 0;
	int j = 0;
	int flag = 0;

	while(1)
	{	
		write(STDOUT_FILENO, "$ ", 2);
		if (getline(&buffer, &bufsiz, stdin) != EOF)
		{
			size = necklace_pearls(buffer);
			args = parsing(buffer, size); /* From here we call the builtins */
			b_func = find_builtins(*args);
			if (b_func != NULL)
			{
				builtin_return = b_func();
				if(_strcmp(args[0], "exit") == 0 && builtin_return == 2)
					return(0);/*Here memory should be freed*/
				if(builtin_return == 0)
					continue;
			}
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
			freedom(args, size);
		}
		else
		{
			write(STDOUT_FILENO, "\n", 1);
			break;
		}	
	}
	return(0);
}
