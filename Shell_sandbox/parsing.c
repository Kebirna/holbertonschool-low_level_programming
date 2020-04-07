#include "hsh.h"


char **parsing(char *buffer, int characters)
{
	char **token_necklace = malloc(sizeof(char *) * characters);
	char *token;
	char *delimiter = " :'\n''\t'";  //Review this behaivor 
	int counter = 0;

	/*spaces = count_spaces(buffer);*/
	if(token_necklace == NULL)
	{
		printf("Error");
		return(NULL);
	}
	token = strtok(buffer, delimiter);
	while(token != NULL)
	{
		token_necklace[counter] = strdup(token);
		token = strtok(NULL, delimiter);
		counter++;
	}
	token_necklace[counter] = token;
	return(token_necklace);
}
