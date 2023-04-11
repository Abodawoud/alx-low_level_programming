#include <stdio.h>
#include <stdlib.h>
/**
*main - program that adds positive numbers.
*@argc: argument counter
*@argv: argument vector
*Return: 0 if no number passed, 1 if there are symbols in input
*/
int main(int argc, char *argv[])
{
	int result = 0;
	int i;
	int j;

for (i = 1; i < argc; i++)
{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] > 48 && argv[i][j] < 57))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				break;
			}
		}
	result = result + atoi(argv[i]);
}
	printf("%d\n", result);

	return (0);
}
