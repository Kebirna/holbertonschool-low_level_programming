#include "hsh.h"



    int non_interactive_mode(char **av __attribute__((unused)))
{
	char *buffer = NULL;
	size_t bufsiz;
	char **args = NULL;
	int size;
	int len = 0;
	char **env_args = NULL;
	int flag = 0;
	
	

	while ((len = getline(&buffer, &bufsiz, stdin)) > 0)
	{
		if (buffer[0] == 10)
			continue;		
		size = necklace_pearls(buffer);
		args = parsing(buffer, size);
		
		if (strcmp(args[0], "exit") == 0)
		{
			
			exit(0);
		}
		/**TEAM DEVELOPMENT PLEASE TRY TO AVOID THIS FLAG CONDITION*/
		if (flag == 0)
		{
			env_args = getenvpath();
			flag = 1;
		}
		args[0] = _insert_path(args, env_args);
		execo(args);
		loop++;
	}
	
	return (0);
}
