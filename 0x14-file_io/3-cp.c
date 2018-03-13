#include "holberton.h"

/**
 * main - copy the file
 *
 * @argc: input number of arguments
 *
 * @argv: input pointer to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int check, fd1, fd2;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((check = read(fd1, buf, 1024)) > 0)
	{
		if (check == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		check = write(fd2, buf, check);
		if (check == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd1) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
