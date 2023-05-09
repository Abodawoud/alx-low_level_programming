#include "main.h"
#include <stdio.h>
/**
 * main - Entry Function
 * @ac: filename
 * @av: string to write to the file
 * Return: 1 on success, -1 on failure
*/
int main(int ac, char **av)
{
	int ff, ft, err_close;
	unsigned int num_chars, numberofwrites;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	ff = open(av[1], O_RDONLY);
	ft = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	error_message(ff, ft, av);
	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(ff, buffer, 1024);
		if (num_chars == -1)
			error_message(-1, 0, av);
		numberofwrites = write(ft, buffer, num_chars);
		if (num_chars == -1)
			error_message(0, -1, av);
	}
	err_close = close(ff);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}

	err_close = close(ft);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}
}
/**
 * error_message - Function error
 * @ff: filename from
 * @ft: filename to
 * @av: string to write to the file
 * Return: VOID
*/
void error_message(int ff, int ft, char *av)
{
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n",
		"Error: Can't read from file NAME_OF_THE_FILE", av[1]);
		exit(99);
	}

	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n",
		"Error: Can't write to NAME_OF_THE_FILE", av[2]);
		exit(99);
	}
}
