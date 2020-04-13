#include "hsh.h"

extern char **environ;/*takes the environment variable*/

char **get_path()
{
	int counter = 0, size = 0;
	char *path = NULL;
	char *token = NULL;
	char *delimiter = "=:";
	char **path_necklace = NULL;

	size = necklace_pearls(*environ);
	path_necklace = malloc(sizeof(char *) * size + 1);
	while(environ[counter] != NULL)
	{
		if(strstr(environ[counter], "PATH") != NULL)/*Search for PATH in environment*/
			break; /*environ[counter] is positioned in PATH*/
		counter++;
		
		/*printf("%d ", counter);*/
	}
	path = environ[counter];
	counter = 0;
	strtok(path, delimiter);/* This gets rids of the "PATH="" part */
	token = strtok(NULL, delimiter); /* Here we start to take dir paths*/
	while(token != NULL)
	{
		path_necklace[counter] = strdup(token);
		token = strtok(NULL, delimiter);
		counter++;
	}
	path_necklace[counter] = token;
	return(path_necklace);
}

char *_insert_path(char **args, char **path)
{
	char *cwd = getcwd(NULL, 0);
	struct stat *verify = malloc(sizeof(struct stat));
	int counter = 0;
	char *tmp = NULL;

	while(path[counter] != NULL)
	{
		chdir(path[counter]); /* It goes to each dir in path*/
		if (stat(args[0], verify) == 0)
		{
			tmp = strcat(path[counter], "/");
			args[0] = strcat(tmp, args[0]);
			break;
		}
		counter++;
	}
	chdir(cwd);
	return(args[0]);
}
