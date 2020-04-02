#include "holberton.h"

/**
 * close_function -  closes two open files by its file descriptor
 * @from: descriptor of file from
 * @to: descriptor of file to
 *
 * Return: Always nothing
 */

void close_function(int from, int to)
{
	int status_from = 0;
	int status_to = 0;

	status_from = close(from);
	status_to = close(to);

	if (status_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d \n", from);
		exit(100);
	}
	if (status_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d \n", to);
		exit(100);
	}
}

/**
 * main - Copies one file into other
 * @argc: # of arguments (must be 3)
 * @argv: Vector of arguments
 *
 * Return: 1 on success, -1 on failure
 */
int main(int argc, char **argv)
{
	int fd_from = -1, fd_to = -1, i = 0;
	ssize_t let_readed = 0;
	char *from_file = (*(argv + 1)), *to_file = (*(argv + 2));
	char buffer[1024];

	while (i++ < 1024)
		buffer[i] = '\0';
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(from_file, O_RDONLY);/*Maybe the * is not correct*/
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_file);
		exit(98);
	}
	let_readed = read(fd_from, buffer, 1024);
	if (let_readed < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_file);
		exit(98);
	}
	fd_to = open(to_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", to_file);
		exit(99);
	}
	write(fd_to, buffer, 1024);
	close_function(fd_from, fd_to);
return (1);
}
