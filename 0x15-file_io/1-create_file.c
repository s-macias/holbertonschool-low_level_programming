#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: pointer to the file that will be read and printed
 * @text_content pointer to the content of the file
 *
 * Return: 1 for success, -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int text_length = 0, fd, written_letters;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[text_length])
		text_length++;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	written_letters = write(fd, text_content, text_length);
	if (written_letters == -1)
		return (-1);

	close(fd);
	return (1);
}
