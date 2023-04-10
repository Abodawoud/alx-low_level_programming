#include <stdio.h>

/**
*main - that prints its name, followed by a new line.
*@argc: argument counter
*@argv: argument vector
*Return: (0) Success
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
