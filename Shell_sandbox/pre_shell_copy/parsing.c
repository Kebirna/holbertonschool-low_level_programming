#include "hsh.h"

extern char **environ;/*takes the environment variable*/

int necklace_pearls(char *buffer)
{
	int pearls = 0;
	char *delimiter = " =:'\n''\t'";
	int i = 0;
	int j = 0;

	while (buffer[i] != '\0')
	{
		for (j = 0; delimiter[j] != '\0'; j++)
		{
			if (buffer[i] == delimiter[j])
			{
				pearls++;
				break;
			}
		}
		i++;
	}
	return (pearls);
}

char **parsing(char *buffer, int characters, int size_path)
	{
		char **token_necklace = malloc(sizeof(char *) * characters);
		char *token;
		char *delimiter = " :'\n''\t'";
		int counter = 0;
		char **path = NULL;
		char **args = NULL;

		if (token_necklace == NULL)
		{
			printf("Error");
			return (NULL);
		}
		token = strtok(buffer, delimiter);
		while (token != NULL)
		{
			token_necklace[counter] = strdup(token);
			token = strtok(NULL, delimiter);
			counter++;
		}
		token_necklace[counter] = token; /*Here are the args tokenized*/
		
		/*START OF THE PATH WORK*/
		path = _path(size_path);
		args = _insert_path(token_necklace, path);

		return (args);
	}
