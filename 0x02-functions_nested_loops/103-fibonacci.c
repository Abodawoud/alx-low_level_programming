#include <stdio.h>
/**
 * main - Finds the sum of even-valued terms in the Fibonacci sequence
 * up to 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 1, b = 2, c, sum = 2;

	for (; b <= 4000000;)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
	}

	printf("%d\n", sum);

	return (0);
}
