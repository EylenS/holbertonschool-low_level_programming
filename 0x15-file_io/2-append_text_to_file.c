#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: Is the NULL terminated string to add at the end of the file.
 * Return: 1 on success. On failure, -1).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t nbyte;

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		if (text_content != NULL)
		{
			while (*(text_content + i) != '\0') /* size of the string */
			{
				i++;
			}
			nbyte = write(fd, text_content, i);
			if (nbyte == -1)
				return (-1);
		}
		close(fd);
		return (1);
	}
	return (-1);
}
