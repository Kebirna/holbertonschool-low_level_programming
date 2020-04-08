#include "hsh.h"

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *buffer = NULL;
	size_t bufsiz;
	char **args = NULL;
	int size;
	int int_mode = 1;

	while (int_mode)
	{
		int_mode = isatty(STDIN_FILENO);
		if (int_mode == 1)
		{
			write(STDOUT_FILENO, "interactive$ ", 13);
		}
		args = NULL;
		if (getline(&buffer, &bufsiz, stdin) != EOF)
		{
			size = necklace_pearls(buffer);
			args = parsing(buffer, size);
			execo(args);
		}
		else
		{
			write(STDOUT_FILENO, "\n", 1);
			break;
		}
		
		 
		
	}
	return (0);
}
