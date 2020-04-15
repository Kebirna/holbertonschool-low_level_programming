#include "hsh.h"
extern char **environ;

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

char *ret_path_line()
{
	int i = 0;

	for (i = 0; environ[i] != NULL; i++)
	{
		if (strncmp(environ[i], "PATH", 4) == 0) /*This takes only the first 4 bytes*/
			break;
	}
	/***PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin*/
	return (environ[i]);
}

char **getenvpath()
{
	char *tmp = NULL;
	int size_args = 0;
	char **env_args = NULL;

	tmp = ret_path_line();
	change_equal_sig(tmp);
	size_args = necklace_pearls(tmp);
	env_args = parsing(tmp, size_args);

	return (env_args);
}

char *_insert_path(char **args, char **path)
{
	char *cwd = getcwd(NULL, 0);
	struct stat *verify = malloc(sizeof(struct stat));
	int counter = 0;
	char *tmp1 = NULL;
	char *tmp2 = NULL;
	
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
				tmp2 = strdup(path[counter]);  /***  ./   a.out                  */
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
	return (tmp2);
}
