#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0
*/

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}

	}
	else
	{
		putchar('\n');
	}
}
