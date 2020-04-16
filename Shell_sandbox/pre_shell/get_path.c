#include "hsh.h"

/**
 * change_equal_sig - Change from a given strings = to : character
 * @str: given string
 * Return: Nohing
*/
void change_equal_sig(char *str)
{
	char **ptr_str = NULL;
	int i = 0;

	ptr_str = &str;

	while (ptr_str[0][i] != '=')
	{
		ptr_str[0][i] = ':';
		i++;
	}
	ptr_str[0][i] = ':';
}
/**
 * ret_path_line - Return Path variable for enviroment
 * Return: PATH
*/
char *ret_path_line()
{
	int i = 0;

	for (i = 0; environ[i] != NULL; i++)
	{
		if (strncmp(environ[i], "PATH", 4) == 0)
			break;
	}
	return (environ[i]);
}
/**
 * getenvpath - Returns tokenized path enviroment
 * Return: Returns tokenized path enviroment
*/
char **getenvpath()
{
	char *tmp = NULL;
	int size_args = 0;
	char **env_args = NULL;

	tmp = ret_path_line();
	change_equal_sig(tmp);
	size_args = necklace_pearls(tmp);
	env_args = parsing(tmp, size_args);
	tmp =  NULL;
	return (env_args);
}
/**
 * _insert_path - Inserts the directory into given command
 * @args: given command
 * @path: tokenized path enviroment
 * Return: Full path command if exists or just a given command
*/
char *_insert_path(char **args, char **path)
{
	char *cwd = getcwd(NULL, 0);
	struct stat *verify = malloc(sizeof(struct stat));
	int counter = 0;
	char *tmp1 = NULL;
	char *tmp2 = NULL;
	char *ptr_path;
	char *result;

	if (strstr(args[0], "/"))
	{
		tmp2 = args[0];
	}
	else
	{
		while (path[counter] != NULL)
		{

			chdir(path[counter]);
			if (stat(args[0], verify) == 0)
			{
				tmp1 = strdup(args[0]);
				tmp2 = strdup(path[counter]);
				strcat(tmp2, "/");
				strcat(tmp2, tmp1);
				break;
			}
			counter++;
		}
	}
	chdir(cwd);
	if (tmp2 == NULL)
	{
		tmp2 = args[0];
	}
	free(tmp1);
	free(verify);
	free(cwd);
	tmp1 =  NULL;
	return (tmp2);
}
