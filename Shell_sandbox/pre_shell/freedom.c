#include "hsh.h"

void freedom(char **args, int size)
{
	int i;

	for (i = 0; i < size; i++)
		free(args[i]);
	free(args);
}
