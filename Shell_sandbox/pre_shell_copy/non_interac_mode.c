#include "hsh.h"

extern char **environ;/*takes the environment variable*/

int non_interactive_mode(char **av __attribute__((unused)))
{
	char *buffer = NULL;
	size_t bufsiz;
	char **args = NULL;
	int size = 0, size_path = 0;
	int len = 0;
	char *environ_copy = *environ;

	while ((len = getline(&buffer, &bufsiz, stdin)) > 0)
	{
		size_path = necklace_pearls(environ_copy);
		size = necklace_pearls(buffer);
		args = parsing(buffer, size, size_path);
		execo(args);
		freedom(args, size);
		free(buffer);
	}
	

	return (0);
}
