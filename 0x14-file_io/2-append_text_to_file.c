#include "holberton.h"

/**
 * append_text_to_file - append a new text to an existing file
 *
 * @filename: input name of the file in string
 *
 * @text_content: input text of content in string
 *
 * Return: 1 on succes -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num = 1, count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	else
	{
		while (text_content[count] != '\0')
		{
			count++;
		}
		num = write(fd, text_content, count);
		if (num == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
