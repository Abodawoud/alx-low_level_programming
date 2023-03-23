#include "main.h"
/**
 *print_line - print _
 *@n: The number of _ characters to be printed.
 */
void print_line(int n)
{
int j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (j = 0; j < n; ++j)
{
_putchar('_');
}
_putchar('\n');
}
}
