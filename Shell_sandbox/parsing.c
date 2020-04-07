#include "hsh.h"

int necklace_pearls(char *buffer)
{
	int pearls = 0;/*Counts the # of tokens*/
	char *token = NULL;
	char *delimiter = " :'\n''\t'";
	int i = 0;
	int j;

	printf("Pearls: %d", pearls);
	return(pearls);

	/*printf("Buffer: %s ", buffer);
	token = strtok(buffer, delimiter);
	printf("Pointer: %p ", token);
	if (token != NULL)
		pearls++;

	while(token != NULL)
	{
		token = strtok(NULL, delimiter);
		pearls++;
	}
	printf("Pearls subfuc: %d ", pearls);
	return(pearls + 1);*/
}


char **parsing(char *buffer, int characters) /*Characters are not needed*/
{
	char **token_necklace = NULL;
	char *token;
	char *delimiter = " :'\n''\t'";  //Review this behaivor 
	int counter = 0, pearls = 0;

	pearls = necklace_pearls(buffer);
	printf("Pearls count: %d ", pearls);
	*token_necklace = malloc(sizeof(char *) * pearls);
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
