#include "hsh.h"

int non_interactive_mode(char **av __attribute__((unused)))
{
	char *buffer = NULL;
	size_t bufsiz;
	char **args = NULL;
	int size;
	int len = 0;

	while (len = getline(&buffer, &bufsiz, stdin) > 0)
	{
		size = necklace_pearls(buffer);
		args = parsing(buffer, size);
		execo(args);
	}
	return (0);
}