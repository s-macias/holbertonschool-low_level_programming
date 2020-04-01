#include "holberton.h"

/**
 * main - copies the contents of a file to another file
 * @ac: number of arguments passed to the function
 * @av: pointer where the arguments are
 * @
 * Return: 97, if ac is not 3; 98, if file doesn't exist or can't be read;
 * 99, if file can't be created or written to, and 100, if file descriptor can't
 * be closed
 */

int main(int argc, char *argv[])
{
	int fd_open_filefrom, fd_open_fileto, fd_read, fd_write, fd_close;
	char *filefrom, *fileto;

	filefrom = argv[1];
	fileto = argv[2];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (filefrom == NULL)
	{
		dprintf(STDERROR_FILENO, "Error: Can't read from file %s\n", fi\
			efrom);
		exit(98);
	}
	if (fileto == NULL)
	{
		dprintf(STDERROR_FILENO, "Error: Can't write to %s\n", filefrom\
			);
		exit(99);
	}
	f = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
	return (0);


	int text_length = 0, fd, written_letters;

	if (filefrom == NULL)
		return (-1);
	if (fileto == NULL)
		return (1);

	while (text_content[text_length])
		text_length++;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	written_letters = write(fd, text_content, text_length);
	if (written_letters == -1)
		return (-1);

	close(fd);
	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_close);
		exit(100);
	}
	return (1);
}
