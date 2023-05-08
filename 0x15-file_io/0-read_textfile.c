#include "main.h"
#include <stdio.h>
/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: filename
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t READ_numbers;
	ssize_t WRITE_numbers;
	char buffer[1024];

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd != -1)
	{
		READ_numbers = read(fd, buffer, letters);
		WRITE_numbers = write(STDOUT_FILENO, buffer, READ_numbers);
		close(fd);
		return (WRITE_numbers);
	}

	return (0);
}
