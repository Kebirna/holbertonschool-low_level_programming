#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "holberton.h"
#include <time.h>

int main()
{
	struct stat buffer;
	char *myfile = "myfile.txt";
	int size, id;
	time_t my_time;


	stat(myfile, &buffer);

	size = buffer.st_size;
	my_time = buffer.st_atime;

	time(&my_time);
	printf("Size of file is %d bytes\n", size);
	printf("Date ot last access is %s\n", ctime(&my_time));

	return(0);
}
