#include <stdio.h>
#include <stdlib.h>
/**
*main - program that prints the minimum number
*of coins to make change for an amount of money
*@argc: argument counter
*@argv: argument vector
*Return: 0 if no number passed, 1 if there are symbols in input
*/
int main(int argc, char *argv[])
{
	int i;
	int j = 0;
	int fkka[4] = {25, 10, 5, 2, 1};

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	int Gneh = atoi(argv[1]);

	if (Gneh <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 4; i++)
	{
		j = j + (Gneh / fkka[i]);
		Gneh = Gneh % fkka[i];
		if (Gneh == 0)
		{
			break;
		}
	}
	printf("%d\n", j);
	return (0);
}
