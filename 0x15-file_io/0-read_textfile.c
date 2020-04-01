#include "holberton.h"

/**
 * read_textfile - Reads a text file and writes it to stdout
 * @filename: file to be readed
 * @letters: # of letters to be readed
 * Return: # of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readed;
	ssize_t printed;
	char *buffer;
	int fd;

	readed = 0;
	printed  = 0;
	fd = -1;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	readed = read(fd, buffer, letters);
	if (readed < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	*(buffer + readed) = '\0';

	printed = write(STDOUT_FILENO, buffer, readed);
	close(fd);
	free(buffer);

	if (readed != printed)
		return (0);
	return (printed);
}
