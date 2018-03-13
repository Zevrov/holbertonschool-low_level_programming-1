#include "holberton.h"

/**
 * create_file - create a file with the text content
 *
 * @filename: input name of the file in string
 *
 * @text_content: input text of content in string
 *
 * Return: 1 on succes -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, num = 1, count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
