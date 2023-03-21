#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(long int n)
{
	long int k;

	if (n < 0)
	{
		n = -n;
	}

	k = n % 10;

	_putchar(k + '0');
	return (k);
}
