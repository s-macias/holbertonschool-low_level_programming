#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the file that will be read and printed
 * @text_content pointer to the content to be appended
 *
 * Return: 1 for success, -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int text_length = 0, fd, written_letters;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
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
	return (1);
}
