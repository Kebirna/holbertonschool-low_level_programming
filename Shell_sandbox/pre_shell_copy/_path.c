#include "hsh.h"

extern char **environ;/*takes the environment variable*/

char **_path(int size)
{
	int counter = 0, path_position = 0;
	char *path = NULL, *reservoir = NULL;
	char *token = NULL;
	char *delimiter = "=:";
	char **path_necklace = malloc(sizeof(char *) * size + 1);
	
	size = necklace_pearls(*environ);
	while(environ[counter] != NULL)
	{
		if(strstr(environ[counter], "PATH") != NULL)/*Search for PATH in environment*/
			break; /*environ[counter] is positioned in PATH*/
		counter++;
		
		/*printf("%d ", counter);*/
	}
	reservoir = environ[counter];
	path = reservoir;
	path_position = counter;

	printf("Environ: %s\n", path);
	counter = 0;
	strtok(path, delimiter);/* This gets rids of the "PATH="" part */
	printf("Environ 2: %s\n", path);
	token = strtok(NULL, delimiter); /* Here we start to take dir paths*/
	printf("Environ 3: %s\n", token);
	while(token != NULL)
	{
		path_necklace[counter] = strdup(token);
		token = strtok(NULL, delimiter);
		counter++;
	}
	path_necklace[counter] = token;
	path = environ[path_position];
	printf("Environ 3 stage: %s\n", path);
	return(path_necklace);
}

char **_insert_path(char **args, char **path)
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
	free(verify);
	chdir(cwd);
	return(args);
}
