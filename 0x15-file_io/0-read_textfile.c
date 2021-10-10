#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the std output.
 * @filename: Array.
 * @letters: Is the number of letters it should read and print.
 * Return: The number of letters it could read and print.
 * If the file can not be opened or read, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t c, r;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
		return (0);
	close(fd);
	c = write(STDOUT_FILENO, buf, r);
	if ((int)c == -1)
		return (0);

	free(buf);
	return (r);
}