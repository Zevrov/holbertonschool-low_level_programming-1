#include "holberton.h"

/**
 * read_textfile - read txt files and prints it in the POSIX output
 *
 * @filename: input name of the file in string
 *
 * @letters: input number of letter it should print
 *
 * Return: Always 0 if failes or the size of the print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	num = read(fd, buf, letters);
	if (num == -1)
		return (0);
	buf[num] = '\0';
	write(STDOUT_FILENO, buf, num);
	close(fd);
	return (num);
}
