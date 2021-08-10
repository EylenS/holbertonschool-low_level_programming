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
	size_t c, r;
	int fd;
	char buffer[1024];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	r = read(fd, buffer, sizeof(buffer));
	if (r <= 0)
		return (0);
	if (letters > r)
		letters = r;
	c = write(STDOUT_FILENO, buffer, letters);
	if ((int)c < 0)
		return (0);
	return (letters);
}
