#include <stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints numbers, followed by a new line.
 * @n: last fixed argument in the variadic function
 * @separator: the string to be printed between numbers
 * Return: printed numbers
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
    char *p;

    va_start(list, n);
    for (i = 0; i < n; i++)
	{
        p = va_arg(list, char*);
        if (p != NULL)
            printf("%s", p);
        else
            printf("(nil)");

		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
