#include "holberton.h"

/**
 * read_textfile - This function will read a text file and prints
 * @filename: Name of the file
 * @letters: Amount of letters
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t print;
	char buff[1024];

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (-1);

	print = read(fd, buff, letters);
	if (print == -1)
		return (0);
	close(fd);
	write(STDOUT_FILENO, buff, print);

	return (print);
}
