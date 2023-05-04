#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number
 * Return: Void
*/
void print_binary(unsigned long int n)
{
	int mask = 1 << 31;

	while (mask != 0)
	{
		if (n & mask)
			printf("1");
		else
			printf("0");
		mask >>= 1;
	}
}
