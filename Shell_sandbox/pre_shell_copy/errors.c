#include "hsh.h"
/**
 * error_msg - writes error depending on the error number
 * @args: given command to execute
 * Return: Nothing
*/
void error_msg(char **args)
{
	char *error_message = malloc(sizeof(char) * 255);
	char *looper = NULL;
	char buff[33];

	looper = _itoa(loop);
	error_message = strdup(hsh_home);
	error_message = strcat(error_message, ": ");
	error_message = strcat(error_message, looper);
	error_message = strcat(error_message, ": ");
	error_message = strcat(error_message, args[0]);
	perror(error_message);
	free(error_message);
}
