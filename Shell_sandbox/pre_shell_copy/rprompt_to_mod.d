#include "hsh.h"

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *buffer = NULL;
	size_t bufsiz;
	char **args = NULL;
	int size;
	int int_mode = 1;
	int len = 0;

	while (int_mode)
	{
		int_mode = isatty(STDIN_FILENO);		
		if (int_mode == 1)
		{
			write(STDOUT_FILENO, "$ ", 2);
		}
		args = NULL;
		
		while (len = getline(&buffer, &bufsiz, stdin) > 0)
		{
			size = necklace_pearls(buffer);
			args = parsing(buffer, size);
			execo(args);
			if (int_mode == 1)
				break;
			
		}
		
		/* IMPLEMENTAR EN MODO INTERACTIVO
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
		*/
	}
	return (0);
}
