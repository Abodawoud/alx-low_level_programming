#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
int x, y, k;

	if (!(n > 15 || n < 0))
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				k = x * y;
				if (y == 0)
					putchar(k + '0');
				if (y != 0 && k < 10)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar(k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar((k / 10) + '0');
					putchar((k % 10) + '0');
				}
				else if (k >= 100)
				{
					putchar(',');
					putchar(' ');
					putchar((k / 100) + '0');
					putchar(((k % 100) / 10) + '0');
					putchar((k % 10) + '0');
				}

			}
			putchar('\n');
		}
	}
}
