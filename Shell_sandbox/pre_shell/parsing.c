#include "hsh.h"

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
	return (pearls + 1);
}

char **parsing(char *buffer, int characters)
{
	char **token_necklace = malloc(sizeof(char *) * characters);
	char *token = NULL;
	char *delimiter = " :'\n''\t'";
	int counter = 0;


	if (token_necklace == NULL)
	{
		/*REQUEST TO CHANGE TO DEV TEAM: *PLEASE HANDLE ERROR*/
		printf("Error");
		return (NULL);
	}
	token = strtok(buffer, delimiter);
	while (token != NULL)
	{
		token_necklace[counter] = _strdup(token);
		token = strtok(NULL, delimiter);
		counter++;
	}
	token_necklace[counter] = token;

	return (token_necklace);
}
