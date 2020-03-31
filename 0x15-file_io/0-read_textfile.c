#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file that will be read and printed
 * @letters: number of letters to read and print or 0 if the file cannot be
opened or read or number of bytes is not what is expected
 *
 * Return: number of bytes returned
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *string;
	int error, fd, read_letters, written_letters;

	if (filename == NULL)
		return (0);

	string = malloc(sizeof(char) * letters);

	if (string == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	read_letters = read(fd, string, letters);
	if (read_letters < 0)
		return (0);
	written_letters = write(STDOUT_FILENO, string, read_letters);
	if (written_letters < 0)
		return (0);

	error = close(fd);
	if (error < 0)
		return (0);

	free(string);
	return (written_letters);
}
