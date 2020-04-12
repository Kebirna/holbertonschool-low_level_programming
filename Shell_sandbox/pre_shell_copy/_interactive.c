#include "hsh.h"

extern char **environ;/*takes the environment variable*/

int _interactive(char **av __attribute__((unused)))
{
	char *buffer = NULL;
	size_t bufsiz;
	char **args = NULL;
	int size = 0, size_path = 0;
	char *environ_copy = *environ;

	while(1)
	{
		write(STDOUT_FILENO, "$ ", 2);
		if (getline(&buffer, &bufsiz, stdin) != EOF)
		{
			size_path = necklace_pearls(environ_copy);
			size = necklace_pearls(buffer);
			args = parsing(buffer, size, size_path);
			execo(args);
			/*freedom(args, size);*/
			/*free(buffer);*/
		}
		else
		{
			write(STDOUT_FILENO, "\n", 1);

			break;
		}	
	}
	
	return (0);
}
