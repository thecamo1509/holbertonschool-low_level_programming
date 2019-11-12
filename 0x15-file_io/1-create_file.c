#include "holberton.h"

/**
 * create_file - Function to create file
 * @filename: This is the name of the file
 * @text_content: This is the content
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
	return (-1);

	if (text_content == NULL)
	{
		text_content = "\0";
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
