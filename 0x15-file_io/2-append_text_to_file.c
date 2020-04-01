#include "holberton.h"

/**
 * append_text_to_file -  appends text at the end of file
 * @filename: name of the file to append
 * @text_content: is a NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = -1, text_size = 0, i = 0;
	ssize_t printed = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + i) != '\0')
		{
			text_size++;
			i++;
		}
	}
	else
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	printed = write(fd, text_content, text_size);

	close(fd);

	if (printed != text_size)
		return (-1);

	return (1);
}
