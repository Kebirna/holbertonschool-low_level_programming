#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	pid_t identifier;

	identifier = getpid();

	printf("Process Id: %i\n", identifier );

	return (0); 
}
