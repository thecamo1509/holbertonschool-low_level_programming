#include "holberton.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: This is the name of the file
 * @text_content: This is the content
 * Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
	return (-1);

	if (text_content == NULL)
	text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
	return (-1);

	while (text_content[i] != '\0')
	{
		i++;
	}

	write(fd, text_content, i);
	if (fd == -1)
	return (-1);

	close(fd);
	return (1);
}
