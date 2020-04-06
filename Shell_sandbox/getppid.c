#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	pid_t parent_identifier;

	parent_identifier = getppid();

	printf("Process' Parent Id: %i\n", parent_identifier);

	return (0); 
}
