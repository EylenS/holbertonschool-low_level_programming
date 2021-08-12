#include "main.h"

/**
 * create_file - Reads a text file and prints it to the std output.
 * @filename: Name of the file to create.
 * @text_content: The string to be written in filename..
 * Return: 1 on success. On failure, return (-1).
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t nbyte;

	if (filename != NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fd < 0)
			return (-1);
		if (text_content != NULL)
		{
			while (*(text_content + i) != '\0') /* size of the string */
			{
				i++;
			}
			i++;
		}
		nbyte = write(fd, text_content, i);
		if (nbyte < 0)
			return (-1);
		close(fd);
		return (1);
	}
	return (-1);
}
