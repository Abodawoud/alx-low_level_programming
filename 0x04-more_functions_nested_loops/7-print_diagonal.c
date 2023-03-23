#include "main.h"
/**
 *print_diagonal - print space and /
 *@n: input variable, how many times to print
 */
void print_diagonal(int n)
{
int j;
int k;
if (n > 0)
{
for (j = 0; j <= n; j++)
{
if (j >= 1)
{
for (k = 1; k < j; ++k)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

}
}
else
{
_putchar('\n');
}
}
