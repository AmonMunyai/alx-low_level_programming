#include "main.h"

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