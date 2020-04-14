#include "hsh.h"

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	int int_mode = 1;

	loop  = 1;

	hsh_home =   av[0];
	
	int_mode = isatty(STDIN_FILENO);
	if (int_mode == 0)
	{
		non_interactive_mode(av);
	}
	else
	{

		_interactive(av);
	}
	return (0);
}
