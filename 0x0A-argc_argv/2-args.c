#include <stdio.h>
/**
*main - that prints all arguments it receives.
*@argc: argument counter
*@argv: argument vector
*Return: (0) Success
*/
int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}

	return (0);
}
