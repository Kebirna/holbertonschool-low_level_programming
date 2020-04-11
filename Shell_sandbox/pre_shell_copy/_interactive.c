#include "hsh.h"

int _interactive(char **av __attribute__((unused)))
{
	char *buffer = NULL;
	size_t bufsiz;
	char **args = NULL;
	int size;

	while(1)
	{
		write(STDOUT_FILENO, "$ ", 2);
		if (getline(&buffer, &bufsiz, stdin) != EOF)
		{
			size = necklace_pearls(buffer);
			args = parsing(buffer, size);
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
