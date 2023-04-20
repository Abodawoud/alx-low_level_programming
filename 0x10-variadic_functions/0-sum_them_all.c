#include <stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: last fixed argument in the variadic function
 * Return: k the summtion of ...
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int k;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	k = va_arg(list, int);

	for (i = 1; i < n; i++)
		k = k + va_arg(list, int);

	va_end(list);
	return (k);
}
