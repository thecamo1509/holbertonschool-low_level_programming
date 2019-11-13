#include "holberton.h"
/**
* main - Function to copy files.
* @argc: Arguments counting
* @argv: Arguments.
* Return: 0 if it succeeds
*/
int main(int argc, char **argv)
{
	int fd, fdtmp, save = 1024, save2 = 0, closing;
	char *buff;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fdtmp = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (fdtmp == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (save == 1024)
	{
		save = read(fd, buff, 1024);
		if (save == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
		save2 = write(fdtmp, buff, save);
		if (save2 == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	closing = close(fd);
	if (closing == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	closing = close(fdtmp);
	if (closing == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdtmp), exit(100);
	return (0);
}
