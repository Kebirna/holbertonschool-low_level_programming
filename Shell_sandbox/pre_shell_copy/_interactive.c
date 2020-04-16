#include "hsh.h"
/**
 * _interactive - Creates a loop that execute command lines entered by tty
 * @av: argument from main
 * Return: Exit / Error Code
*/
int _interactive(char **av)
{
	char *buffer = NULL;
	size_t bufsiz;
	char **args = NULL;
	char **env_args = NULL;
	int (*b_func)() = NULL;
	int builtin_return = 0;
	int size;
	int flag = 0;

	while (1)
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
					if (env_args != NULL)
						freedom(2, env_args);
					freedom(2, args);
				}
				builtin_return = b_func();
			}
			if (flag == 0)
			{
				env_args = getenvpath();
				flag = 1;
			}
			args[0] = _insert_path(args, env_args);
			errcode = execo(args);
			freedom(2, args);
			loop++;
		}
		else
		{
			write(STDOUT_FILENO, "\n", 1);
			break;
		}
	}
	return (errcode);
}
