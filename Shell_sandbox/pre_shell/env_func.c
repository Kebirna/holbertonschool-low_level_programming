#include "hsh.h"

int env_func()
{
	int counter = 0, lenght = 0;
	
	while (environ[counter] != NULL)
	{
		lenght = strlen(environ[counter]);
		write(STDOUT_FILENO, environ[counter], lenght);
		write(STDOUT_FILENO, "\n", 1);
		counter++;
	}
	write(STDOUT_FILENO, "\n", 1);
	return(0);
}