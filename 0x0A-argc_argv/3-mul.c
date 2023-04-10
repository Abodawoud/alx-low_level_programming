#include <stdio.h>
#include <stdlib.h>
/**
*main - program that multiplies two numbers.
*@argc: argument counter
*@argv: argument vector
*Return: (0) Success
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
