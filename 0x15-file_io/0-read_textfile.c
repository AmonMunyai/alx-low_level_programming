#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to
 * the POSIX standard output.
 * @filename: the name of file to open and read.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fp, count;
	char c;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	count = 0;
	while (count < letters && fp != 0)
	{
		fp = read(fd, &c, 1);

		if (fp == 0)
		{
			break;
		}

		_putchar(c);
		count++;
	}

	close(fd);

	return (count);
}
