#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: filename
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content)
		i = write(fd, text_content, strlen(text_content));

	if (i == -1)
		return (-1);
	close(fd);
	return (1);
}
