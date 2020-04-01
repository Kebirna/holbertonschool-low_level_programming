#include "holberton.h"

/**
 * create_file - Creates a file and writes text in it
 * @filename: file to be created
 * @text_content: # of letters to be readed
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int text_size;
	ssize_t printed;

	text_size = 0;
	fd = -1;
	printed = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + text_size) != '\0')
		{
			text_size++;
		}
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	if (fd == -1)
		return (-1);
	printed = write(fd, text_content, text_size);
	close(fd);
	if (printed != text_size)
		return (-1);
	return (1);
}
