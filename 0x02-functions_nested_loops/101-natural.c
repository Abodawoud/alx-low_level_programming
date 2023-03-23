#include <stdio.h>
/**
* main - computes and prints the sum of all the multiples of
* list all the natural numbers below 10 that are multiples of 3 or 5.
* Return: Nothing.
*/
int main(void)
{
	int i, r;
	int maxvalue = 1024;

	for (i = 0; i < maxvalue; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			r += i;
		}
	}

	printf("%d\n", r);
	return (0);
}
