#include <stdio.h>
/**
 * main -  calculate largest prime of 612852475143
 * Description : used for loop to get all prime factors
 * Return: (0) Success
 */

int main(void)
{
	long int num, p;

	num = 612852475143;
	for (p = 2; p <= num; p++)
	{
		if (num % p == 0)
		{
			num /= p;
			p--;
		}
	}
	printf("%ld\n", p);
	return (0);
}
