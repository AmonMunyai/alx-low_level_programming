#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to
 * the POSIX standard output.
 * @filename: the name of file to open and read.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print,
 * 0 otherwise.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, fr, count;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	fr = read(file, buf, letters);
	count = write(STDOUT_FILENO, buf, fr);

	if (file == -1 || fr == -1 || count == -1 || count != fr)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(file);

	return (count);
}
